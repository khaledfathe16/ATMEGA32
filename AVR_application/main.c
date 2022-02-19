#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_interface.h"
//#include "UART_interface.h"
#include "SPI_interface.h"
#include "EEPROM_interface.h"

int main()
{
	MDIO_voidSetPortMode(GPIOC,OUTPUT);
//u8 x;
MSPI_voidIntialize(M);
_delay_ms(50);

HEEPROM_voidSendData(0x00,0x4F);

/*HEEPROM_voidSendData(0x00,0x3F);
HEEPROM_voidSendData(0x01,0x06);
HEEPROM_voidSendData(0x02,0x5B);
HEEPROM_voidSendData(0x03,0x4F);
HEEPROM_voidSendData(0x04,0x66);
HEEPROM_voidSendData(0x05,0x6D);
HEEPROM_voidSendData(0x06,0x7D);
HEEPROM_voidSendData(0x07,0x07);
HEEPROM_voidSendData(0x08,0x7F);
HEEPROM_voidSendData(0x09,0x6F);

*/
while(1)
{
/*
	for(u8 i=0;i<=9;i++)
	{
		x = HEEPROM_u8ReadData(0x00+i);
			MDIO_voidSetPortValue(GPIOC,x);
			_delay_ms(100);


	}
*/
}



return 0;
}

//

