#include "STD_TYPES.h"
#include "BIT_MATH.h"
//#include <util/delay.h>
#include "DIO_interface.h"
//#include "UART_interface.h"
#include "SPI_interface.h"


int main()
{
MDIO_voidSetPortMode(GPIOC,OUTPUT);
//MUART_voidUartInitialization();
u8 Data=0;
MSPI_voidIntialize(S);

while(1)
{



	Data = MSPI_voidRecieveData();

	MDIO_voidSetPortValue(GPIOC,Data);

    //MUART_voidUartSendByte(Data);
}



return 0;
}
