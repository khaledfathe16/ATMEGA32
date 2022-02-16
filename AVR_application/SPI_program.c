#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include"DIO_interface.h"

#include"SPI_interface.h"
#include"SPI_private.h"
#include"SPI_config.h"


void MSPI_voidIntialize(u8 copy_u8Mode)
{
	if(copy_u8Mode == M)
	{

		MDIO_voidSetPinMode(GPIOB,5,OUTPUT); // MOSI Enable as output
		MDIO_voidSetPinMode(GPIOB,4,OUTPUT); // SS Enable as output
		MDIO_voidSetPinMode(GPIOB,7,OUTPUT); // SCK Enable as output
		SPI -> SPCR = 0x50 ;  //intterupt & spi enable & data order & m or s select & clock polarity & cpha & spr0 spr1
		SPI -> SPSR = 0x00 ;  // SPI intterupt flag & Write collision flag & spi2x double speed bit
		
	}
	
	else if(copy_u8Mode == S)
	{
		    MDIO_voidSetPinMode(GPIOB,6,OUTPUT); // MISO Enable as output
		SPI -> SPCR = 0x40 ;  //intterupt & spi enable & data order & m or s select & clock polarity & cpha & spr0 spr1
		SPI -> SPSR = 0x00 ;  // SPI intterupt flag & Write collision flag & spi2x double speed bit
		
	}
	
    else {/*Error*/}
	
	
}



void MSPI_voidSendData(u8 copy_u8Data)
{

	 SPI->SPDR = copy_u8Data;

	 while(!(GET_BIT(SPI->SPSR,7)));
	 
	
}


u8 MSPI_voidRecieveData(void)
{
      

	 while(!(GET_BIT(SPI->SPSR,7)));
	 
 	 return SPI->SPDR;

}


















