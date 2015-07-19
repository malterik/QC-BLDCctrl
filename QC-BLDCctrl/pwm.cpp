/*
 * pwm.c
 *
 * Created: 18.09.2014 23:25:39
 *  Author: Erik
 */ 

#include <avr/io.h>
#include "pwm.hpp"

void PWM::pwmInit(void){
	DDRB = 0xFF;                      // Set Port PB1 and PB2 as Output
	PORTB=0;
	
	TCCR0A = (1<<WGM01)|(1<<WGM00)|(1<<COM0A1)   // Set up the two Control registers of Timer1.
	|(1<<COM1B1);             // Wave Form Generation is Fast PWM 8 Bit,
	TCCR0B = (1<<CS02)     // OC1A and OC1B are cleared on compare match
	|(1<<CS00);               // and set at BOTTOM. Clock Prescaler is 1024.
}

void PWM::setDutyCycle ( char rate) {
	OCR0A = rate;
}