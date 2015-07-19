/*
 * BLDC_ctrl.c
 *
 * Created: 07.09.2014 13:34:47
 *  Author: Erik
 */ 
#define F_CPU 16000000UL

#include "pwm.h"
#include "uart.h"
#include <util/delay.h>

int main(void)
{
	char dutyCycle;
	
	uartInit();
	println("*** QC-BLCD OS Startup Sequence ***");
	println(" > UART initialized");
	pwmInit();
	println(" > PWM initialized");

	println("Startup Sequence successfull!");
	println("Main program starts now");
	
	dutyCycle=0;
    char* msg=malloc(4*sizeof(char));
	

    while(42) {                       
               /*itoa(dutyCycle,msg,10);
			   println(msg);*/
			   setDutyCycle(dutyCycle);
			   dutyCycle++;
			   _delay_ms(200);

	}                        


}