#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"UART_interface.h"
#include"UART_private.h"
#include"UART_config.h"



void MUART_voidUartInitialization(void)
{
	/*
	Baud Rate = 9600
	Parity disabled 
	stop bit = 1
	data = 7
	enable tx and rx 
	Asynchrounous
	
	*/
	
	UCSRA = 0x00;  // Choose Normal Asynchrounous Mode
	
	UCSRC = 0x86;  // Choose Asynchrounous and parity and stop bit and data character
	
	UBRRL = 0x33; //Set UBRR  = 51 , Baud rate = 9600 
	
	UCSRB = 0x18;  // Enable Transmitter and Reciver
	
}


void MUART_voidUartSendByte(u8 copy_u8Byte)
{
	while(!(GET_BIT(UCSRA,5))){}
	
	
		UDR = copy_u8Byte ;
		

	
	
	
}


u8 MUART_u8UartRecieveByte(void)
{
	while(!(GET_BIT(UCSRA,7))){}
	
	return UDR;
	
}
