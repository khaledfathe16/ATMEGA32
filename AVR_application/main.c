#include "STD_TYPES.h"
#include "BIT_MATH.h"
//#include <util/delay.h>
#include "DIO_interface.h"
//#include "UART_interface.h"
#include "SPI_interface.h"


int main()
{
//MUART_voidUartInitialization();
MSPI_voidIntialize(M);
u8 Data=0x01;

	//Data = MUART_u8UartRecieveByte();
while(1)
{
	MSPI_voidSendData(Data);

}



return 0;
}
