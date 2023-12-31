#ifndef known_16bit_timers_header_
#define known_16bit_timers_header_

// Wiring-S
//
#if defined(__AVR_ATmega644P__) && defined(WIRING)
  #define TIMER1_A_PIN   5
  #define TIMER1_B_PIN   4
  #define TIMER1_ICP_PIN 6

// Teensy 2.0
//
#elif defined(__AVR_ATmega32U4__) && defined(CORE_TEENSY)
  #define TIMER1_A_PIN   14
  #define TIMER1_B_PIN   15
  #define TIMER1_C_PIN   4
  #define TIMER1_ICP_PIN 22
  #define TIMER1_CLK_PIN 11
  #define TIMER3_A_PIN   9
  #define TIMER3_ICP_PIN 10

// Teensy++ 2.0
#elif defined(__AVR_AT90USB1286__) && defined(CORE_TEENSY)
  #define TIMER1_A_PIN   25
  #define TIMER1_B_PIN   26
  #define TIMER1_C_PIN   27
  #define TIMER1_ICP_PIN 4
  #define TIMER1_CLK_PIN 6
  #define TIMER3_A_PIN   16
  #define TIMER3_B_PIN   15
  #define TIMER3_C_PIN   14
  #define TIMER3_ICP_PIN 17
  #define TIMER3_CLK_PIN 13

// Teensy 3.0
//
#elif defined(__MK20DX128__)
  #define TIMER1_A_PIN   3
  #define TIMER1_B_PIN   4
  #define TIMER1_ICP_PIN 4

// Teensy 3.1 / Teensy 3.2
//
#elif defined(__MK20DX256__)
  #define TIMER1_A_PIN   3
  #define TIMER1_B_PIN   4
  #define TIMER1_ICP_PIN 4
  #define TIMER3_A_PIN   32
  #define TIMER3_B_PIN   25
  #define TIMER3_ICP_PIN 32
  
// Teensy 3.5 / Teensy 3.6
//
#elif defined(__MK64FX512__) || defined(__MK66FX1M0__)
  #define TIMER1_A_PIN   3
  #define TIMER1_B_PIN   4
  #define TIMER1_ICP_PIN 4
  #define TIMER3_A_PIN   29
  #define TIMER3_B_PIN   30
  #define TIMER3_ICP_PIN 29
  
// Teensy-LC
//
#elif defined(__MKL26Z64__)
  #define TIMER1_A_PIN   16
  #define TIMER1_B_PIN   17
  #define TIMER1_ICP_PIN 17
  #define TIMER3_A_PIN   3
  #define TIMER3_B_PIN   4
  #define TIMER3_ICP_PIN 4

// Teensy 4.0
//
#elif defined(__IMXRT1062__)
  #define TIMER1_A_PIN   7
  #define TIMER1_B_PIN   8
  #define TIMER3_A_PIN   9
  #define TIMER3_B_PIN   6

// Arduino Mega
//
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
  #define TIMER1_A_PIN   11
  #define TIMER1_B_PIN   12
  #define TIMER3_A_PIN   5
  #define TIMER3_B_PIN   2
  #define TIMER3_C_PIN   3
  #define TIMER4_A_PIN   6
  #define TIMER4_B_PIN   7
  #define TIMER4_C_PIN   8
  #define TIMER4_ICP_PIN 49
  #define TIMER5_A_PIN   46
  #define TIMER5_B_PIN   45
  #define TIMER5_C_PIN   44
  #define TIMER3_ICP_PIN 48
  #define TIMER3_CLK_PIN 47

// Arduino Leonardo, Yun, etc
//
#elif defined(__AVR_ATmega32U4__)
  #define TIMER1_A_PIN   9
  #define TIMER1_B_PIN   10
  #define TIMER1_C_PIN   11
  #define TIMER1_ICP_PIN 4
  #define TIMER1_CLK_PIN 12
  #define TIMER3_A_PIN   5
  #define TIMER3_ICP_PIN 13

//  Uno, Duemilanove, LilyPad, etc
//
#elif defined (__AVR_ATmega168__) || defined (__AVR_ATmega328P__) || defined (__AVR_ATmega328__) ||  defined (__AVR_ATmega8__)
  #define TIMER1_A_PIN   9
  #define TIMER1_B_PIN   10
  #define TIMER1_ICP_PIN 8
  #define TIMER1_CLK_PIN 5

// Minicore generic
//
#elif defined(__AVR_ATmega48PB__) || defined(__AVR_ATmega88PB__) || defined(__AVR_ATmega168PB__)
  #define TIMER1_A_PIN   9
  #define TIMER1_B_PIN   10
  #define TIMER1_ICP_PIN 8
  #define TIMER1_CLK_PIN 5
#elif defined(__AVR_ATmega328PB__) 
  #define TIMER1_A_PIN   9
  #define TIMER1_B_PIN   10
  #define TIMER1_ICP_PIN 8
  #define TIMER1_CLK_PIN 5
  #define TIMER3_A_PIN   0
  #define TIMER3_B_PIN   2
  #define TIMER3_ICP_PIN 25
  #define TIMER3_CLK_PIN 26
  #define TIMER4_A_PIN   1
  #define TIMER4_B_PIN   2
  #define TIMER4_ICP_PIN 23
  #define TIMER4_CLK_PIN 24

//  attiny167
//
#elif defined (__AVR_ATtiny167__)
  #define TIMER1_A_PIN   14
  #define TIMER1_B_PIN   11
  //#define TIMER1_ICP_PIN 8
  //#define TIMER1_CLK_PIN 5
  
// Sanguino
//
#elif defined(__AVR_ATmega644P__) || defined(__AVR_ATmega644__)
  #define TIMER1_A_PIN   13
  #define TIMER1_B_PIN   12
  #define TIMER1_ICP_PIN 14
  #define TIMER1_CLK_PIN 1

// Wildfire - Wicked Devices
//
#elif defined(__AVR_ATmega1284P__) && defined(WILDFIRE_VERSION) && WILDFIRE_VERSION >= 3
  #define TIMER1_A_PIN   5   // PD5
  #define TIMER1_B_PIN   8   // PD4
  #define TIMER1_ICP_PIN 6   // PD6
  #define TIMER1_CLK_PIN 23  // PB1
  #define TIMER3_A_PIN   12  // PB6
  #define TIMER3_B_PIN   13  // PB7
  #define TIMER3_ICP_PIN 9   // PB5
  #define TIMER3_CLK_PIN 0   // PD0
#elif defined(__AVR_ATmega1284P__) && defined(WILDFIRE_VERSION) && WILDFIRE_VERSION < 3
  #define TIMER1_A_PIN   5   // PD5
  #define TIMER1_B_PIN   4   // PD4
  #define TIMER1_ICP_PIN 6   // PD6
  #define TIMER1_CLK_PIN 15  // PB1
  #define TIMER3_A_PIN   12  // PB6
  #define TIMER3_B_PIN   13  // PB7
  #define TIMER3_ICP_PIN 11  // PB5
  #define TIMER3_CLK_PIN 0   // PD0

// Mighty-1284 - Maniacbug
//
#elif defined(__AVR_ATmega1284P__) || defined(__AVR_ATmega1284__)
  #define TIMER1_A_PIN   12  // PD5
  #define TIMER1_B_PIN   13  // PD4
  #define TIMER1_ICP_PIN 14  // PD6
  #define TIMER1_CLK_PIN 1   // PB1
  #define TIMER3_A_PIN   6   // PB6
  #define TIMER3_B_PIN   7   // PB7
  #define TIMER3_ICP_PIN 5   // PB5
  #define TIMER3_CLK_PIN 8   // PD0

#endif

#endif
/*
 *  Interrupt and PWM utilities for 16 bit Timer1 on ATmega168/328
 *  Original code by Jesse Tane for http://labs.ideo.com August 2008
 *  Modified March 2009 by Jérôme Despatis and Jesse Tane for ATmega328 support
 *  Modified June 2009 by Michael Polli and Jesse Tane to fix a bug in setPeriod() which caused the timer to stop
 *  Modified April 2012 by Paul Stoffregen - portable to other AVR chips, use inline functions
 *  Modified again, June 2014 by Paul Stoffregen - support Teensy 3.x & even more AVR chips
 *  Modified July 2017 by Stoyko Dimitrov - added support for ATTiny85 except for the PWM functionality
 *  
 *
 *  This is free software. You can redistribute it and/or modify it under
 *  the terms of Creative Commons Attribution 3.0 United States License. 
 *  To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/us/ 
 *  or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 *
 */

#ifndef TimerOne_h_
#define TimerOne_h_

#if defined(ARDUINO) && ARDUINO >= 100

#else
#include "WProgram.h"
#endif

#if defined (__AVR_ATtiny85__)
#define TIMER1_RESOLUTION 256UL  // Timer1 is 8 bit
#elif defined(__AVR__)
#define TIMER1_RESOLUTION 65536UL  // Timer1 is 16 bit
#else
#define TIMER1_RESOLUTION 65536UL  // assume 16 bits for non-AVR chips
#endif

// Placing nearly all the code in this .h file allows the functions to be
// inlined by the compiler.  In the very common case with constant values
// the compiler will perform all calculations and simply write constants
// to the hardware registers (for example, setPeriod).


class TimerOne
{

#if defined (__AVR_ATtiny85__)
  public:
    //****************************
    //  Configuration
    //****************************
    void initialize(unsigned long microseconds=1000000) __attribute__((always_inline)) {
	TCCR1 = _BV(CTC1);              //clear timer1 when it matches the value in OCR1C
	TIMSK |= _BV(OCIE1A);           //enable interrupt when OCR1A matches the timer value
	setPeriod(microseconds);
    }
    void setPeriod(unsigned long microseconds) __attribute__((always_inline)) {		
	const unsigned long cycles = microseconds * ratio;
	if (cycles < TIMER1_RESOLUTION) {
		clockSelectBits = _BV(CS10);
		pwmPeriod = cycles;
	} else
	if (cycles < TIMER1_RESOLUTION * 2UL) {
		clockSelectBits = _BV(CS11);
		pwmPeriod = cycles / 2;
	} else
	if (cycles < TIMER1_RESOLUTION * 4UL) {
		clockSelectBits = _BV(CS11) | _BV(CS10);
		pwmPeriod = cycles / 4;
	} else
	if (cycles < TIMER1_RESOLUTION * 8UL) {
		clockSelectBits = _BV(CS12);
		pwmPeriod = cycles / 8;
	} else
	if (cycles < TIMER1_RESOLUTION * 16UL) {
		clockSelectBits = _BV(CS12) | _BV(CS10);
		pwmPeriod = cycles / 16;
	} else
	if (cycles < TIMER1_RESOLUTION * 32UL) {
		clockSelectBits = _BV(CS12) | _BV(CS11);
		pwmPeriod = cycles / 32;
	} else
	if (cycles < TIMER1_RESOLUTION * 64UL) {
		clockSelectBits = _BV(CS12) | _BV(CS11) | _BV(CS10);
		pwmPeriod = cycles / 64UL;
	} else
	if (cycles < TIMER1_RESOLUTION * 128UL) {
		clockSelectBits = _BV(CS13);
		pwmPeriod = cycles / 128;
	} else
	if (cycles < TIMER1_RESOLUTION * 256UL) {
		clockSelectBits = _BV(CS13) | _BV(CS10);
		pwmPeriod = cycles / 256;
	} else
	if (cycles < TIMER1_RESOLUTION * 512UL) {
		clockSelectBits = _BV(CS13) | _BV(CS11);
		pwmPeriod = cycles / 512;
	} else
	if (cycles < TIMER1_RESOLUTION * 1024UL) {
		clockSelectBits = _BV(CS13) | _BV(CS11) | _BV(CS10);
		pwmPeriod = cycles / 1024;
	} else
	if (cycles < TIMER1_RESOLUTION * 2048UL) {
		clockSelectBits = _BV(CS13) | _BV(CS12);
		pwmPeriod = cycles / 2048;
	} else
	if (cycles < TIMER1_RESOLUTION * 4096UL) {
		clockSelectBits = _BV(CS13) | _BV(CS12) | _BV(CS10);
		pwmPeriod = cycles / 4096;
	} else
	if (cycles < TIMER1_RESOLUTION * 8192UL) {
		clockSelectBits = _BV(CS13) | _BV(CS12) | _BV(CS11);
		pwmPeriod = cycles / 8192;
	} else
	if (cycles < TIMER1_RESOLUTION * 16384UL) {
		clockSelectBits = _BV(CS13) | _BV(CS12) | _BV(CS11)  | _BV(CS10);
		pwmPeriod = cycles / 16384;
	} else {
		clockSelectBits = _BV(CS13) | _BV(CS12) | _BV(CS11)  | _BV(CS10);
		pwmPeriod = TIMER1_RESOLUTION - 1;
	}
	OCR1A = pwmPeriod;
	OCR1C = pwmPeriod;
	TCCR1 = _BV(CTC1) | clockSelectBits;
    }
	
    //****************************
    //  Run Control
    //****************************	
    void start() __attribute__((always_inline)) {
	TCCR1 = 0;
	TCNT1 = 0;		
	resume();
    }
    void stop() __attribute__((always_inline)) {
	TCCR1 = _BV(CTC1);
    }
    void restart() __attribute__((always_inline)) {
	start();
    }
    void resume() __attribute__((always_inline)) {
	TCCR1 = _BV(CTC1) | clockSelectBits;
    }
	
    //****************************
    //  PWM outputs
    //****************************
	//Not implemented yet for ATTiny85
	//TO DO
	
    //****************************
    //  Interrupt Function
    //****************************
    void attachInterrupt(void (*isr)()) __attribute__((always_inline)) {
	isrCallback = isr;
	TIMSK |= _BV(OCIE1A);
    }
    void attachInterrupt(void (*isr)(), unsigned long microseconds) __attribute__((always_inline)) {
	if(microseconds > 0) setPeriod(microseconds);
	attachInterrupt(isr);
    }
    void detachInterrupt() __attribute__((always_inline)) {
	//TIMSK = 0; // Timer 0 and Timer 1 both use TIMSK register so setting it to 0 will override settings for Timer1 as well
	TIMSK &= ~_BV(OCIE1A);
    }
    static void (*isrCallback)();
    static void isrDefaultUnused();

  private:
    static unsigned short pwmPeriod;
    static unsigned char clockSelectBits;
    static const byte ratio = (F_CPU)/ ( 1000000 );
	
#elif defined(__AVR__)

#if defined (__AVR_ATmega8__)
  //in some io definitions for older microcontrollers TIMSK is used instead of TIMSK1
  #define TIMSK1 TIMSK
#endif
	
  public:
    //****************************
    //  Configuration
    //****************************
    void initialize(unsigned long microseconds=1000000) __attribute__((always_inline)) {
	TCCR1B = _BV(WGM13);        // set mode as phase and frequency correct pwm, stop the timer
	TCCR1A = 0;                 // clear control register A 
	setPeriod(microseconds);
    }
    void setPeriod(unsigned long microseconds) __attribute__((always_inline)) {
	const unsigned long cycles = ((F_CPU/100000 * microseconds) / 20);
	if (cycles < TIMER1_RESOLUTION) {
		clockSelectBits = _BV(CS10);
		pwmPeriod = cycles;
	} else
	if (cycles < TIMER1_RESOLUTION * 8) {
		clockSelectBits = _BV(CS11);
		pwmPeriod = cycles / 8;
	} else
	if (cycles < TIMER1_RESOLUTION * 64) {
		clockSelectBits = _BV(CS11) | _BV(CS10);
		pwmPeriod = cycles / 64;
	} else
	if (cycles < TIMER1_RESOLUTION * 256) {
		clockSelectBits = _BV(CS12);
		pwmPeriod = cycles / 256;
	} else
	if (cycles < TIMER1_RESOLUTION * 1024) {
		clockSelectBits = _BV(CS12) | _BV(CS10);
		pwmPeriod = cycles / 1024;
	} else {
		clockSelectBits = _BV(CS12) | _BV(CS10);
		pwmPeriod = TIMER1_RESOLUTION - 1;
	}
	ICR1 = pwmPeriod;
	TCCR1B = _BV(WGM13) | clockSelectBits;
    }

    //****************************
    //  Run Control
    //****************************
    void start() __attribute__((always_inline)) {
	TCCR1B = 0;
	TCNT1 = 0;		// TODO: does this cause an undesired interrupt?
	resume();
    }
    void stop() __attribute__((always_inline)) {
	TCCR1B = _BV(WGM13);
    }
    void restart() __attribute__((always_inline)) {
	start();
    }
    void resume() __attribute__((always_inline)) {
	TCCR1B = _BV(WGM13) | clockSelectBits;
    }

    //****************************
    //  PWM outputs
    //****************************
    void setPwmDuty(char pin, unsigned int duty) __attribute__((always_inline)) {
	unsigned long dutyCycle = pwmPeriod;
	dutyCycle *= duty;
	dutyCycle >>= 10;
	if (pin == TIMER1_A_PIN) OCR1A = dutyCycle;
	#ifdef TIMER1_B_PIN
	else if (pin == TIMER1_B_PIN) OCR1B = dutyCycle;
	#endif
	#ifdef TIMER1_C_PIN
	else if (pin == TIMER1_C_PIN) OCR1C = dutyCycle;
	#endif
    }
    void pwm(char pin, unsigned int duty) __attribute__((always_inline)) {
	if (pin == TIMER1_A_PIN) { pinMode(TIMER1_A_PIN, OUTPUT); TCCR1A |= _BV(COM1A1); }
	#ifdef TIMER1_B_PIN
	else if (pin == TIMER1_B_PIN) { pinMode(TIMER1_B_PIN, OUTPUT); TCCR1A |= _BV(COM1B1); }
	#endif
	#ifdef TIMER1_C_PIN
	else if (pin == TIMER1_C_PIN) { pinMode(TIMER1_C_PIN, OUTPUT); TCCR1A |= _BV(COM1C1); }
	#endif
	setPwmDuty(pin, duty);
	TCCR1B = _BV(WGM13) | clockSelectBits;
    }
    void pwm(char pin, unsigned int duty, unsigned long microseconds) __attribute__((always_inline)) {
	if (microseconds > 0) setPeriod(microseconds);
	pwm(pin, duty);
    }
    void disablePwm(char pin) __attribute__((always_inline)) {
	if (pin == TIMER1_A_PIN) TCCR1A &= ~_BV(COM1A1);
	#ifdef TIMER1_B_PIN
	else if (pin == TIMER1_B_PIN) TCCR1A &= ~_BV(COM1B1);
	#endif
	#ifdef TIMER1_C_PIN
	else if (pin == TIMER1_C_PIN) TCCR1A &= ~_BV(COM1C1);
	#endif
    }

    //****************************
    //  Interrupt Function
    //****************************
	
    void attachInterrupt(void (*isr)()) __attribute__((always_inline)) {
	isrCallback = isr;
	TIMSK1 = _BV(TOIE1);
    }
    void attachInterrupt(void (*isr)(), unsigned long microseconds) __attribute__((always_inline)) {
	if(microseconds > 0) setPeriod(microseconds);
	attachInterrupt(isr);
    }
    void detachInterrupt() __attribute__((always_inline)) {
	TIMSK1 = 0;
    }
    static void (*isrCallback)();
    static void isrDefaultUnused();

  private:
    // properties
    static unsigned short pwmPeriod;
    static unsigned char clockSelectBits;






#elif defined(__arm__) && defined(TEENSYDUINO) && (defined(KINETISK) || defined(KINETISL))

#if defined(KINETISK)
#define F_TIMER F_BUS
#elif defined(KINETISL)
#define F_TIMER (F_PLL/2)
#endif

// Use only 15 bit resolution.  From K66 reference manual, 45.5.7 page 1200:
//   The CPWM pulse width (duty cycle) is determined by 2 x (CnV - CNTIN) and the
//   period is determined by 2 x (MOD - CNTIN). See the following figure. MOD must be
//   kept in the range of 0x0001 to 0x7FFF because values outside this range can produce
//   ambiguous results.
#undef TIMER1_RESOLUTION
#define TIMER1_RESOLUTION 32768

  public:
    //****************************
    //  Configuration
    //****************************
    void initialize(unsigned long microseconds=1000000) __attribute__((always_inline)) {
	setPeriod(microseconds);
    }
    void setPeriod(unsigned long microseconds) __attribute__((always_inline)) {
	const unsigned long cycles = (F_TIMER / 2000000) * microseconds;
  // A much faster if-else
  // This is like a binary serch tree and no more than 3 conditions are evaluated.
  // I haven't checked if this becomes significantly longer ASM than the simple ladder.
  // It looks very similar to the ladder tho: same # of if's and else's
 
  /*
  // This code does not work properly in all cases :(
  // https://github.com/PaulStoffregen/TimerOne/issues/17 
  if (cycles < TIMER1_RESOLUTION * 16) {
    if (cycles < TIMER1_RESOLUTION * 4) {
      if (cycles < TIMER1_RESOLUTION) {
        clockSelectBits = 0;
        pwmPeriod = cycles;
      }else{
        clockSelectBits = 1;
        pwmPeriod = cycles >> 1;
      }
    }else{
      if (cycles < TIMER1_RESOLUTION * 8) {
        clockSelectBits = 3;
        pwmPeriod = cycles >> 3;
      }else{
        clockSelectBits = 4;
        pwmPeriod = cycles >> 4;
      }
    }
  }else{
    if (cycles > TIMER1_RESOLUTION * 64) {
      if (cycles > TIMER1_RESOLUTION * 128) {
        clockSelectBits = 7;
        pwmPeriod = TIMER1_RESOLUTION - 1;
      }else{
        clockSelectBits = 7;
        pwmPeriod = cycles >> 7;
      }
    }
    else{
      if (cycles > TIMER1_RESOLUTION * 32) {
        clockSelectBits = 6;
        pwmPeriod = cycles >> 6;
      }else{
        clockSelectBits = 5;
        pwmPeriod = cycles >> 5;
      }
    }
  }
  */
	if (cycles < TIMER1_RESOLUTION) {
		clockSelectBits = 0;
		pwmPeriod = cycles;
	} else
	if (cycles < TIMER1_RESOLUTION * 2) {
		clockSelectBits = 1;
		pwmPeriod = cycles >> 1;
	} else
	if (cycles < TIMER1_RESOLUTION * 4) {
		clockSelectBits = 2;
		pwmPeriod = cycles >> 2;
	} else
	if (cycles < TIMER1_RESOLUTION * 8) {
		clockSelectBits = 3;
		pwmPeriod = cycles >> 3;
	} else
	if (cycles < TIMER1_RESOLUTION * 16) {
		clockSelectBits = 4;
		pwmPeriod = cycles >> 4;
	} else
	if (cycles < TIMER1_RESOLUTION * 32) {
		clockSelectBits = 5;
		pwmPeriod = cycles >> 5;
	} else
	if (cycles < TIMER1_RESOLUTION * 64) {
		clockSelectBits = 6;
		pwmPeriod = cycles >> 6;
	} else
	if (cycles < TIMER1_RESOLUTION * 128) {
		clockSelectBits = 7;
		pwmPeriod = cycles >> 7;
	} else {
		clockSelectBits = 7;
		pwmPeriod = TIMER1_RESOLUTION - 1;
	}

	uint32_t sc = FTM1_SC;
	FTM1_SC = 0;
	FTM1_MOD = pwmPeriod;
	FTM1_SC = FTM_SC_CLKS(1) | FTM_SC_CPWMS | clockSelectBits | (sc & FTM_SC_TOIE);
    }

    //****************************
    //  Run Control
    //****************************
    void start() __attribute__((always_inline)) {
	stop();
	FTM1_CNT = 0;
	resume();
    }
    void stop() __attribute__((always_inline)) {
	FTM1_SC = FTM1_SC & (FTM_SC_TOIE | FTM_SC_CPWMS | FTM_SC_PS(7));
    }
    void restart() __attribute__((always_inline)) {
	start();
    }
    void resume() __attribute__((always_inline)) {
	FTM1_SC = (FTM1_SC & (FTM_SC_TOIE | FTM_SC_PS(7))) | FTM_SC_CPWMS | FTM_SC_CLKS(1);
    }

    //****************************
    //  PWM outputs
    //****************************
    void setPwmDuty(char pin, unsigned int duty) __attribute__((always_inline)) {
	unsigned long dutyCycle = pwmPeriod;
	dutyCycle *= duty;
	dutyCycle >>= 10;
	if (pin == TIMER1_A_PIN) {
		FTM1_C0V = dutyCycle;
	} else if (pin == TIMER1_B_PIN) {
		FTM1_C1V = dutyCycle;
	}
    }
    void pwm(char pin, unsigned int duty) __attribute__((always_inline)) {
	setPwmDuty(pin, duty);
	if (pin == TIMER1_A_PIN) {
		*portConfigRegister(TIMER1_A_PIN) = PORT_PCR_MUX(3) | PORT_PCR_DSE | PORT_PCR_SRE;
	} else if (pin == TIMER1_B_PIN) {
		*portConfigRegister(TIMER1_B_PIN) = PORT_PCR_MUX(3) | PORT_PCR_DSE | PORT_PCR_SRE;
	}
    }
    void pwm(char pin, unsigned int duty, unsigned long microseconds) __attribute__((always_inline)) {
	if (microseconds > 0) setPeriod(microseconds);
	pwm(pin, duty);
    }
    void disablePwm(char pin) __attribute__((always_inline)) {
	if (pin == TIMER1_A_PIN) {
		*portConfigRegister(TIMER1_A_PIN) = 0;
	} else if (pin == TIMER1_B_PIN) {
		*portConfigRegister(TIMER1_B_PIN) = 0;
	}
    }

    //****************************
    //  Interrupt Function
    //****************************
    void attachInterrupt(void (*isr)()) __attribute__((always_inline)) {
	isrCallback = isr;
	FTM1_SC |= FTM_SC_TOIE;
	NVIC_ENABLE_IRQ(IRQ_FTM1);
    }
    void attachInterrupt(void (*isr)(), unsigned long microseconds) __attribute__((always_inline)) {
	if(microseconds > 0) setPeriod(microseconds);
	attachInterrupt(isr);
    }
    void detachInterrupt() __attribute__((always_inline)) {
	FTM1_SC &= ~FTM_SC_TOIE;
	NVIC_DISABLE_IRQ(IRQ_FTM1);
    }
    static void (*isrCallback)();
    static void isrDefaultUnused();

  private:
    // properties
    static unsigned short pwmPeriod;
    static unsigned char clockSelectBits;

#undef F_TIMER

#elif defined(__arm__) && defined(TEENSYDUINO) && defined(__IMXRT1062__)

  public:
    //****************************
    //  Configuration
    //****************************
    void initialize(unsigned long microseconds=1000000) __attribute__((always_inline)) {
	setPeriod(microseconds);
    }
    void setPeriod(unsigned long microseconds) __attribute__((always_inline)) {
	uint32_t period = (float)F_BUS_ACTUAL * (float)microseconds * 0.0000005f;
	uint32_t prescale = 0;
	while (period > 32767) {
		period = period >> 1;
		if (++prescale > 7) {
			prescale = 7;	// when F_BUS is 150 MHz, longest
			period = 32767; // period is 55922 us (~17.9 Hz)
			break;
		}
	}
	//Serial.printf("setPeriod, period=%u, prescale=%u\n", period, prescale);
	FLEXPWM1_FCTRL0 |= FLEXPWM_FCTRL0_FLVL(8); // logic high = fault
	FLEXPWM1_FSTS0 = 0x0008; // clear fault status
	FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_CLDOK(8);
	FLEXPWM1_SM3CTRL2 = FLEXPWM_SMCTRL2_INDEP;
	FLEXPWM1_SM3CTRL = FLEXPWM_SMCTRL_HALF | FLEXPWM_SMCTRL_PRSC(prescale);
	FLEXPWM1_SM3INIT = -period;
	FLEXPWM1_SM3VAL0 = 0;
	FLEXPWM1_SM3VAL1 = period;
	FLEXPWM1_SM3VAL2 = 0;
	FLEXPWM1_SM3VAL3 = 0;
	FLEXPWM1_SM3VAL4 = 0;
	FLEXPWM1_SM3VAL5 = 0;
	FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_LDOK(8) | FLEXPWM_MCTRL_RUN(8);
	pwmPeriod = period;
    }
    //****************************
    //  Run Control
    //****************************
    void start() __attribute__((always_inline)) {
	stop();
	// TODO: how to force counter back to zero?
	resume();
    }
    void stop() __attribute__((always_inline)) {
	FLEXPWM1_MCTRL &= ~FLEXPWM_MCTRL_RUN(8);
    }
    void restart() __attribute__((always_inline)) {
	start();
    }
    void resume() __attribute__((always_inline)) {
	FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_RUN(8);
    }

    //****************************
    //  PWM outputs
    //****************************
    void setPwmDuty(char pin, unsigned int duty) __attribute__((always_inline)) {
	if (duty > 1023) duty = 1023;
	int dutyCycle = (pwmPeriod * duty) >> 10;
	//Serial.printf("setPwmDuty, period=%u\n", dutyCycle);
	if (pin == TIMER1_A_PIN) {
		FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_CLDOK(8);
		FLEXPWM1_SM3VAL5 = dutyCycle;
		FLEXPWM1_SM3VAL4 = -dutyCycle;
		FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_LDOK(8);
	} else if (pin == TIMER1_B_PIN) {
		FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_CLDOK(8);
		FLEXPWM1_SM3VAL3 = dutyCycle;
		FLEXPWM1_SM3VAL2 = -dutyCycle;
		FLEXPWM1_MCTRL |= FLEXPWM_MCTRL_LDOK(8);
	}
    }
    void pwm(char pin, unsigned int duty) __attribute__((always_inline)) {
	setPwmDuty(pin, duty);
	if (pin == TIMER1_A_PIN) {
		FLEXPWM1_OUTEN |= FLEXPWM_OUTEN_PWMB_EN(8);
		IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_01 = 6; // pin 7 FLEXPWM1_PWM3_B
	} else if (pin == TIMER1_B_PIN) {
		FLEXPWM1_OUTEN |= FLEXPWM_OUTEN_PWMA_EN(8);
		IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_00 = 6; // pin 8 FLEXPWM1_PWM3_A
	}
    }
    void pwm(char pin, unsigned int duty, unsigned long microseconds) __attribute__((always_inline)) {
	if (microseconds > 0) setPeriod(microseconds);
	pwm(pin, duty);
    }
    void disablePwm(char pin) __attribute__((always_inline)) {
	if (pin == TIMER1_A_PIN) {
		IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_01 = 5; // pin 7 FLEXPWM1_PWM3_B
		FLEXPWM1_OUTEN &= ~FLEXPWM_OUTEN_PWMB_EN(8);
	} else if (pin == TIMER1_B_PIN) {
		IOMUXC_SW_MUX_CTL_PAD_GPIO_B1_00 = 5; // pin 8 FLEXPWM1_PWM3_A
		FLEXPWM1_OUTEN &= ~FLEXPWM_OUTEN_PWMA_EN(8);
	}
    }
    //****************************
    //  Interrupt Function
    //****************************
    void attachInterrupt(void (*f)()) __attribute__((always_inline)) {
	isrCallback = f;
	attachInterruptVector(IRQ_FLEXPWM1_3, &isr);
	FLEXPWM1_SM3STS = FLEXPWM_SMSTS_RF;
	FLEXPWM1_SM3INTEN = FLEXPWM_SMINTEN_RIE;
	NVIC_ENABLE_IRQ(IRQ_FLEXPWM1_3);
    }
    void attachInterrupt(void (*f)(), unsigned long microseconds) __attribute__((always_inline)) {
	if(microseconds > 0) setPeriod(microseconds);
	attachInterrupt(f);
    }
    void detachInterrupt() __attribute__((always_inline)) {
	NVIC_DISABLE_IRQ(IRQ_FLEXPWM1_3);
	FLEXPWM1_SM3INTEN = 0;
    }
    static void isr(void);
    static void (*isrCallback)();
    static void isrDefaultUnused();

  private:
    // properties
    static unsigned short pwmPeriod;
    static unsigned char clockSelectBits;

#endif
};

extern TimerOne Timer1;

#endif

/*
 *  Interrupt and PWM utilities for 16 bit Timer1 on ATmega168/328
 *  Original code by Jesse Tane for http://labs.ideo.com August 2008
 *  Modified March 2009 by Jérôme Despatis and Jesse Tane for ATmega328 support
 *  Modified June 2009 by Michael Polli and Jesse Tane to fix a bug in setPeriod() which caused the timer to stop
 *  Modified Oct 2009 by Dan Clemens to work with timer1 of the ATMega1280 or Arduino Mega
 *  Modified April 2012 by Paul Stoffregen
 *  Modified again, June 2014 by Paul Stoffregen
 *  Modified July 2017 by Stoyko Dimitrov - added support for ATTiny85 except for the PWM functionality
 *
 *  This is free software. You can redistribute it and/or modify it under
 *  the terms of Creative Commons Attribution 3.0 United States License. 
 *  To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/us/ 
 *  or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 *
 */

TimerOne Timer1;              // preinstatiate

unsigned short TimerOne::pwmPeriod = 0;
unsigned char TimerOne::clockSelectBits = 0;
void (*TimerOne::isrCallback)() = TimerOne::isrDefaultUnused;

// interrupt service routine that wraps a user defined function supplied by attachInterrupt
#if defined (__AVR_ATtiny85__)
ISR(TIMER1_COMPA_vect)
{
  Timer1.isrCallback();
}
#elif defined(__AVR__)
ISR(TIMER1_OVF_vect)
{
  Timer1.isrCallback();
}
#elif defined(__arm__) && defined(TEENSYDUINO) && (defined(KINETISK) || defined(KINETISL))
void ftm1_isr(void)
{
  uint32_t sc = FTM1_SC;
  #ifdef KINETISL
  if (sc & 0x80) FTM1_SC = sc;
  #else
  if (sc & 0x80) FTM1_SC = sc & 0x7F;
  #endif
  Timer1.isrCallback();
}
#elif defined(__arm__) && defined(TEENSYDUINO) && defined(__IMXRT1062__)
void TimerOne::isr(void)
{
  FLEXPWM1_SM3STS = FLEXPWM_SMSTS_RF;
  Timer1.isrCallback();
}

#endif

void TimerOne::isrDefaultUnused()
{
}

// Todo código anterior é para utilizado para construir a biblioteca TimerOne

int analogPin = A1;


int   val   = 0;  // variable to store the value read
float f_val = 0;

const int   N   = 10;
const float iN  = 0.1;

int         h_i = 0;

float buffer_f_c[N] = {0,0,0,0,0,0,0,0,0,0};
float buffer_f_s[N] = {0,0,0,0,0,0,0,0,0,0};
float mseno[N]        = { 0, -0.587785252292473, -0.951056516295154, -0.951056516295154, -0.587785252292473, 0, 0.587785252292473, 0.951056516295154, 0.951056516295154, 0.587785252292473};
float coseno[N]       = {1, 0.809016994374947, 0.309016994374947, -0.309016994374947, -0.809016994374947, -1, -0.809016994374947, -0.309016994374947, 0.309016994374947, 0.809016994374947 };
float soma_s       = 0;
float soma_c       = 0;
float modulo       = 0;
float aux_v = 0;

bool adc_flag = 0;
int buf_index = 0;
int elevacaoFlag = 0;
int afundamentoFlag = 0;

// Estrutura para armazenar informações sobre afundamento/elevação
struct EventData
{
  int ocorrencia; // 1 - Afundamento / 2 - Elevação
  unsigned long duracao;
  float tensao;
};

int const quantidadeRegistrosHistorico = 4;
EventData historicoElevacao[quantidadeRegistrosHistorico];
int bufferHistoricoElevacaoIndex = 0;
EventData historicoAfundamento[quantidadeRegistrosHistorico];
int bufferHistoricoAfundamentoIndex = 0;

float limiarElevacao = 1.1;
float limiarAfundamento = 0.9;

unsigned long tempoInicioAfundamento = 0;
unsigned long tempoFinalAfundamento = 0;

unsigned long tempoInicioElevacao = 0;
unsigned long tempoFinalElevacao = 0;

float controleModuloElevacao[2];
float controleModuloAfundamento[2];

int deveRegistrarElevacao = 0;

int registrandoEvento = 0;

void setup (void)
{
  Timer1.initialize (1667) ; //----10 amostras 1666.67us = 600hz--
  Timer1.attachInterrupt( amostrar );

  Serial.begin (500000);
}

void loop (void)
{
  if( adc_flag ){
    modulo = calcularModulo();
    Serial.println(modulo);
    detectarOcorrencia(modulo);

    buf_index = buf_index + 1;
    if ( buf_index == N ){
      buf_index = 0;
    }

    adc_flag = 0;
  }
}

void detectarOcorrencia(float modulo) {
  // Valor do módulo com 127V é igual a 1,50
  float tensaoRede = 127;
  float tensaoModuloRede = 1.5;
  float limiarElevacao = tensaoRede * 1.07;
  float limiarAfundamento = tensaoRede * 0.9;

  float limiarElevacaoModulo = (tensaoModuloRede * limiarElevacao) / tensaoRede;
  float limiarAfundamentoModulo = (tensaoModuloRede * limiarAfundamento) / tensaoRede;
  if (modulo < limiarAfundamentoModulo && !registrandoEvento) {
    //Serial.println("Afundamento detectado.");
    return;
  }

  if (modulo > limiarElevacaoModulo && !registrandoEvento) {
    duranteElevacao(modulo);
    return;
  }
  registrarElevacao();
}

void duranteElevacao(float modulo) {
  Serial.println("Elevação detectada.");
  float valorMaximo = modulo;
  if (!elevacaoFlag) {
    tempoInicioElevacao = millis();
    elevacaoFlag = 1;
    controleModuloElevacao[0] = modulo;
  }
  controleModuloElevacao[1] = modulo;

  controleModuloElevacao[0] = calcularMaiorValor(controleModuloElevacao[0], controleModuloElevacao[1]);

  deveRegistrarElevacao = 1;
}

float calcularMaiorValor(float a, float b) {
  if (a > b) {
    return a;
  }

  return b;
}

void registrarElevacao()
{
  elevacaoFlag = 0;
  elevacaoFlag = 0;
  elevacaoFlag = 0;
  if (deveRegistrarElevacao) {
    registrandoEvento = 1;
    tempoFinalElevacao = millis();
    historicoElevacao[bufferHistoricoElevacaoIndex].ocorrencia = labelOcorrencia(2);
    historicoElevacao[bufferHistoricoElevacaoIndex].duracao = (tempoInicioElevacao - tempoFinalElevacao) / 1000;
    historicoElevacao[bufferHistoricoElevacaoIndex].tensao = controleModuloElevacao[0];

    Serial.print("Evento ");
    Serial.print(bufferHistoricoElevacaoIndex + 1);
    Serial.print(": Ocorrencia = ");
    Serial.print(historicoElevacao[bufferHistoricoElevacaoIndex].ocorrencia);
    Serial.print(", Duração = ");
    Serial.print(historicoElevacao[bufferHistoricoElevacaoIndex].duracao);
    Serial.print(" s, Tensão Máxima = ");
    Serial.print(historicoElevacao[bufferHistoricoElevacaoIndex].tensao);
    Serial.print(" V\n");
    delay(1000);

    bufferHistoricoElevacaoIndex = bufferHistoricoElevacaoIndex + 1;
    if ( bufferHistoricoElevacaoIndex == quantidadeRegistrosHistorico ){
      bufferHistoricoElevacaoIndex = 0;
    }

    registrandoEvento = 0;
  }

  deveRegistrarElevacao = 0;
}

const char* labelOcorrencia(int numeroOcorrencia) {
  if (numeroOcorrencia == 1) {
    return "Afundamento";
  }

  if (numeroOcorrencia == 2) {
    return "Elevação";
  }
}

float calcularModulo() {
    aux_v                   = ( 2 * iN * f_val * coseno[ ( (h_i+1)*buf_index ) - ( N * ( ((h_i+1)*buf_index)/N ) ) ] );
    soma_c             = soma_c + aux_v - buffer_f_c[ (N*h_i) + buf_index ];
    buffer_f_c[ (N*h_i) + buf_index ] = aux_v;

    aux_v                   = ( 2 * iN * f_val * mseno[ ( (h_i+1)*buf_index ) - ( N * ( ((h_i+1)*buf_index)/N ) ) ] );
    soma_s             = soma_s + aux_v - buffer_f_s[ (N*h_i) + buf_index ];
    buffer_f_s[ (N*h_i) + buf_index ] = aux_v;
    
    return sqrt(soma_c*soma_c + soma_s*soma_s);
}

void amostrar() {
  val = analogRead(analogPin);  // read the input pin

  f_val = (float) val * 5 / 1023; // Mapeando valores de tensão em bits

  adc_flag = 1;
}