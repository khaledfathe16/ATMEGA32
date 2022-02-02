#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_interface.h"
//#include "UART_interface.h"
#include "SPI_interface.h"


int main()
{

MSPI_voidIntialize(M);
while(1)
{
	MSPI_voidSendData(0b00001111);
	_delay_ms(500);
	MSPI_voidSendData(0b00000111);
	_delay_ms(500);
	MSPI_voidSendData(0b00000001);
	_delay_ms(500);
}


return 0;
}
