#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "UART_interface.h"



int main()
{
   //Initialize UART
	MUART_voidUartInitialization();
   //initiallize Pins for 7-Segment
	MDIO_voidSetPortMode(GPIOC,HIGH);
	u8 Local_u8Value=0;

	while(1)
	{
	Local_u8Value = MUART_u8UartRecieveByte();


	switch(Local_u8Value)
	{
	case('0'):MDIO_voidSetPortValue(GPIOC,0x3F);break;
	case('1'):MDIO_voidSetPortValue(GPIOC,0x06);break;
	case('2'):MDIO_voidSetPortValue(GPIOC,0x5B);break;
	case('3'):MDIO_voidSetPortValue(GPIOC,0x4F);break;
	case('4'):MDIO_voidSetPortValue(GPIOC,0x66);break;
	case('5'):MDIO_voidSetPortValue(GPIOC,0x6D);break;
	case('6'):MDIO_voidSetPortValue(GPIOC,0x7D);break;
	case('7'):MDIO_voidSetPortValue(GPIOC,0x07);break;
	case('8'):MDIO_voidSetPortValue(GPIOC,0x7F);break;
	case('9'):MDIO_voidSetPortValue(GPIOC,0x6F);break;
	}


	}










return 0;
}
