/*
 * uart.h
 *
 * Created: 18.09.2014 23:23:17
 *  Author: Erik
 */ 


#ifndef UART_H_
#define UART_H_

void uartInit(void);
void uartPutChar(char data);
void print(char buffer[]);
void println(char buffer[]);



#endif /* UART_H_ */