#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_interface.h"
//#include "UART_interface.h"
#include "SPI_interface.h"
#include "EEPROM_interface.h"

int main()
{
	u8 x;
MDIO_voidSetPortMode(GPIOC,OUTPUT);
MSPI_voidIntialize(M);
_delay_ms(5);

x = HEEPROM_u8ReadData(0x00);

if(x==0xFF)
{
	u8 arr[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	HEEPROM_voidSend16Byte(0x00 ,arr);
}

else {

}

/*
HEEPROM_voidSendData(0x00,0xFF);
HEEPROM_voidSendData(0x01,0xFF);
HEEPROM_voidSendData(0x02,0xFF);
HEEPROM_voidSendData(0x03,0xFF);
HEEPROM_voidSendData(0x04,0xFF);
HEEPROM_voidSendData(0x05,0xFF);
HEEPROM_voidSendData(0x06,0xFF);
HEEPROM_voidSendData(0x07,0xFF);
HEEPROM_voidSendData(0x08,0xFF);
HEEPROM_voidSendData(0x09,0xFF);
*/


while(1)
{

	for(u8 i=0;i<=9;i++)
	{

		x = HEEPROM_u8ReadData(0x00+i);
			MDIO_voidSetPortValue(GPIOC,x);
			_delay_ms(100);


	}

}



return 0;
}



