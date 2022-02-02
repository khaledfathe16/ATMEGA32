#include "STD_TYPES.h"
#include "BIT_MATH.h"
//#include <util/delay.h>
#include "DIO_interface.h"
#include "UART_interface.h"
#include "SPI_interface.h"


int main()
{
MUART_voidUartInitialization();
MSPI_voidIntialize(M);
u8 Data=0;
while(1)
{
	Data = MUART_u8UartRecieveByte();

	MSPI_voidSendData(Data);

}



return 0;
}
