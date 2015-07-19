/*
 * uart.c
 *
 * Created: 18.09.2014 23:22:29
 *  Author: Erik
 */ 
#include <avr\io.h>
#include "uart.h"
//----------------------------------------------------------------------
void uartInit(void)
{
	UBRR0L = 103; //9600Baud siehe Baudratentabelle
	UCSR0B = (1<<RXEN0)|(1<<TXEN0); //Sender enable UCSRB / UCR bei z.B.: 2313
	UCSR0C = (1<<USBS0)|(3<<UCSZ00);
}
//----------------------------------------------------------------------
void uartPutChar(char data)
{
	//warte bis UDR leer ist UCSR0A / USR bei z.B.: 2313
	while (!(UCSR0A& (1<<UDRE0)));
	//sende
	UDR0=data;
}
//----------------------------------------------------------------------
void print(char buffer[])
{
	for (int i=0;buffer[i]!=0;i++)
	uartPutChar(buffer[i]);
}
//======================================================================
void println(char buffer[])
{
	for (int i=0;buffer[i]!=0;i++)
	uartPutChar(buffer[i]);
	uartPutChar(0x0D);
	uartPutChar(0x0A);
}