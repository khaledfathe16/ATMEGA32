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
	MDIO_voidSetPortMode(GPIOB,HIGH);

	u8 Local_u8Value=0;

	while(1)
	{
	Local_u8Value = MUART_u8UartRecieveByte();


	switch(Local_u8Value)
	{

	case(255):MDIO_voidSetPortValue(GPIOB,255);MDIO_voidSetPortValue(GPIOC,255);break;

	case(0):MDIO_voidSetPortValue(GPIOB,0x3F);MDIO_voidSetPortValue(GPIOC,0x3F);break;
	case(1):MDIO_voidSetPortValue(GPIOB,0x06);break;
	case(2):MDIO_voidSetPortValue(GPIOB,0x5B);break;
	case(3):MDIO_voidSetPortValue(GPIOB,0x4F);break;
	case(4):MDIO_voidSetPortValue(GPIOB,0x66);break;
	case(5):MDIO_voidSetPortValue(GPIOB,0x6D);break;
	case(6):MDIO_voidSetPortValue(GPIOB,0x7D);break;
	case(7):MDIO_voidSetPortValue(GPIOB,0x07);break;
	case(8):MDIO_voidSetPortValue(GPIOB,0x7F);break;
	case(9):MDIO_voidSetPortValue(GPIOB,0x6F);break;

	case(10):MDIO_voidSetPortValue(GPIOC,0x06);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(20):MDIO_voidSetPortValue(GPIOC,0x5B);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(30):MDIO_voidSetPortValue(GPIOC,0x4F);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(40):MDIO_voidSetPortValue(GPIOC,0x66);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(50):MDIO_voidSetPortValue(GPIOC,0x6D);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(60):MDIO_voidSetPortValue(GPIOC,0x7D);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(70):MDIO_voidSetPortValue(GPIOC,0x07);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(80):MDIO_voidSetPortValue(GPIOC,0x7F);MDIO_voidSetPortValue(GPIOB,0x3F);break;


	case(90):MDIO_voidSetPortValue(GPIOC,0x6F);MDIO_voidSetPortValue(GPIOB,0x3F);break;








	}


	}










return 0;
}
