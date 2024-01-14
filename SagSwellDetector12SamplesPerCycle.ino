#include <TimerOne.h>

int analogPin = A1;

const float iN  = 0.083333;
int const N = 12;

float mseno[N]        = {0, -0.500000000000000, -0.866025403784439, -1, -0.866025403784439, -0.500000000000000, 0, 0.500000000000000, 0.866025403784439, 1, 0.866025403784439, 0.5};
float coseno[N]       = {1, 0.866025403784439, 0.500000000000000, 0, -0.500000000000000, -0.866025403784439, -1, -0.866025403784439, -0.500000000000000, 0, 0.500000000000000, 0.866025403784439};

float bufferFcoseno[N] = {0,0,0,0,0,0,0,0,0,0,0,0};
float bufferFseno[N] = {0,0,0,0,0,0,0,0,0,0,0,0};

float sumSeno = 0;
float sumCoseno = 0;
float voltageModule = 0;
float auxVoltage = 0;

int voltageRead = 0;
float voltageValue = 0;
float voltageMagnitude = 0;
float auxVoltageMagnitude = 0;

bool adcFlag = 0;
int buffIndex = 0;

float const tolerance = 0.00;
float const voltageMagnitudeFixed = 1.56;
float voltageSagLimit = (voltageMagnitudeFixed * 0.9);
float voltageSwellLimit = (voltageMagnitudeFixed * 1.1);

bool isSagInProgress = 0;
bool isSwellInProgress = 0;

unsigned long tempoInicioSag = 0;
float voltageSag = 0;
int countSag = 0;
int bufferSagIndex = 0;

struct SagSwell{
  float duration;
  float voltage;
  int count;
};

int const maxMemoryItems = 4;
SagSwell SagDetected[maxMemoryItems];
SagSwell SwellDetected[maxMemoryItems];

unsigned long tempoInicioSwell = 0;
float voltageSwell = 0;
int countSwell = 0;
int bufferSwellIndex = 0;

int amountSagEvent = 0;
int amountSwellEvent = 0;

float getRMSFromMagnitude(float magnitude) {
  return (magnitude * 81.9) - 0.998;
}

void setup(void)
{
  Timer1.initialize(1389) ; // 12 samples - 1388.89us = 720 Hz
  Timer1.attachInterrupt(sample);

  Serial.begin(500000);
}

void loop(void)
{
  if (adcFlag) {
    auxVoltage = (2 * iN * voltageValue * coseno[(buffIndex) - (N * ((buffIndex) / N))]);
    sumCoseno = sumCoseno + auxVoltage - bufferFcoseno[buffIndex];
    bufferFcoseno[buffIndex] = auxVoltage;

    auxVoltage = (2 * iN * voltageValue * mseno[(buffIndex ) - ( N * ((buffIndex) / N ))]);
    sumSeno = sumSeno + auxVoltage - bufferFseno[buffIndex];
    bufferFseno[buffIndex] = auxVoltage;
    
    auxVoltageMagnitude = voltageMagnitude;
    voltageMagnitude = sqrt((sumCoseno*sumCoseno) + (sumSeno*sumSeno));
    
    buffIndex = buffIndex + 1;
    if (buffIndex == N){
      buffIndex = 0;
    }

    adcFlag = 0;

    detectSagSwell();
  }
}

void sample() {
  voltageRead = analogRead(analogPin);
  voltageValue = (float) voltageRead * 5 / 1023;
  
  adcFlag = 1;
}

void detectSagSwell() {
  if (voltageMagnitude < voltageSagLimit && !isSagInProgress) {
    amountSagEvent = 0;
    amountSagEvent++;
    isSagInProgress = 1;
    return;
  }

  if (voltageMagnitude < voltageSagLimit && isSagInProgress) {
    voltageSag = voltageMagnitude < auxVoltageMagnitude ? voltageMagnitude : auxVoltageMagnitude;
    amountSagEvent++;
    return;
  }

  if (amountSagEvent) {
    countSag++;
    SagDetected[bufferSagIndex].duration = (float) amountSagEvent * 0.001389;
    SagDetected[bufferSagIndex].count = countSag;
    SagDetected[bufferSagIndex].voltage = getRMSFromMagnitude(voltageSag);

    Serial.print("Sag[");
    Serial.print(SagDetected[bufferSagIndex].count);
    Serial.print("]: ");
    Serial.print(SagDetected[bufferSagIndex].voltage, 2);
    Serial.print(" V, ");
    Serial.print(SagDetected[bufferSagIndex].duration, 2);
    Serial.print(" s\n");
    bufferSagIndex++;

    if (bufferSagIndex == maxMemoryItems){
      bufferSagIndex = 0;
    }

    voltageSag = 0;
    tempoInicioSag = 0;
    isSagInProgress = 0;
    amountSagEvent = 0;
    return;
  }

  if (voltageMagnitude > voltageSwellLimit && !isSwellInProgress) {
    amountSwellEvent = 0;
    amountSwellEvent++;
    isSwellInProgress = 1;
    return;
  }

  if (voltageMagnitude > voltageSwellLimit && isSwellInProgress) {
    amountSwellEvent++;
    voltageSwell = voltageMagnitude > auxVoltageMagnitude ? voltageMagnitude : auxVoltageMagnitude;
    return;
  }

  if (amountSwellEvent) {
    countSwell++;
    SwellDetected[bufferSwellIndex].duration = (float) amountSwellEvent * 0.001389;
    SwellDetected[bufferSwellIndex].count = countSwell;
    SwellDetected[bufferSwellIndex].voltage = getRMSFromMagnitude(voltageSwell);

    Serial.print("Swell[");
    Serial.print(SwellDetected[bufferSwellIndex].count);
    Serial.print("]: ");
    Serial.print(SwellDetected[bufferSwellIndex].voltage, 2);
    Serial.print(" V, ");
    Serial.print(SwellDetected[bufferSwellIndex].duration);
    Serial.print(" s\n");

    bufferSwellIndex++;
    if (bufferSwellIndex == maxMemoryItems){
      bufferSwellIndex = 0;
    }

    voltageSwell = 0;
    tempoInicioSwell = 0;
    isSwellInProgress = 0;
    amountSwellEvent = 0;
    return;
  }
}