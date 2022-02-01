#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
//#include "UART_interface.h"
#include "SPI_interface.h"


int main()
{

MSPI_voidIntialize(M);

MSPI_voidSendData(0xFF);

return 0;
}
