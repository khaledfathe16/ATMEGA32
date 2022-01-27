#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "UART_interface.h"



int main()
{
	MDIO_voidSetPinMode(GPIOC,0,OUTPUT);
	MUART_voidUartInitialization();


u8 ask[1000]={"Here you can find activities to practise your reading skills. Reading will help you to improve your understanding of the language and build your vocabulary."};

u8 i=0;

	while((ask[i]!=0))
	{

		MUART_voidUartSendByte((ask[i]));
		i++;
	}









return 0;
}
