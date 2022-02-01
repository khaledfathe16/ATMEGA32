#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include"SPI_interface.h"
#include"SPI_private.h"
#include"SPI_config.h"


void MSPI_voidIntialize(u8 copy_u8Mode)
{
	if(copy_u8Mode == M)
	{
		SPI -> SPCR = 0x50 ;  //intterupt & spi enable & data order & m or s select & clock polarity & cpha & spr0 spr1
		SPI -> SPSR = 0x00 ;  // SPI intterupt flag & Write collision flag & spi2x double speed bit
		
	}
	
	else if(copy_u8Mode == S)
	{
		SPI -> SPCR = 0x40 ;  //intterupt & spi enable & data order & m or s select & clock polarity & cpha & spr0 spr1
		SPI -> SPSR = 0x00 ;  // SPI intterupt flag & Write collision flag & spi2x double speed bit
		
	}
	
    else {/*Error*/}
	
	
}



void MSPI_voidSendData(u8 copy_u8Data)
{
	if(copy_u8Data <= 0xFF)
	{
      
	 while(!(GET_BIT(SPI->SPSR,7)));
	 
 	 SPI->SPDR = copy_u8Data;

	 
	}
	else
	{/*Error*/}
	
	
}


u8 MSPI_voidrecieveData(void)
{
      
	 while(!(GET_BIT(SPI->SPSR,7)));
	 
 	return SPI->SPDR;

}


















