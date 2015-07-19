/*
 * BLDC_ctrl.c
 *
 * Created: 07.09.2014 13:34:47
 *  Author: Erik
 */ 
#define F_CPU 16000000UL

#include "pwm.hpp"
#include "uart.hpp"
#include <util/delay.h>

int main(void)
{
	char dutyCycle;
	UART uart;
	PWM pwm;
	uart.uartInit();
	uart.println("*** QC-BLCD OS Startup Sequence ***");
	uart.println(" > UART initialized");
	pwm.pwmInit();
	uart.println(" > PWM initialized");

	uart.println("Startup Sequence successfull!");
	uart.println("Main program starts now");
	
	dutyCycle=0;
	

    while(42) {                       
               /*itoa(dutyCycle,msg,10);
			   println(msg);*/
			   pwm.setDutyCycle(dutyCycle);
			   dutyCycle++;
			   _delay_ms(200);

	}                        


}