#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SPI_interface.h"
#include "SPI_private.h"
#include "DIO_interface.h"

#include "EEPROM_interface.h"
#include "EEPROM_private.h"
#include "EEPROM_config.h"



 void HEEPROM_voidSendData(u16 copy_u16Address , u8 copy_u8Data)
 {
	 MDIO_voidSetPinValue(GPIOB,4,LOW);
	 MSPI_voidSendData(0x06);
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
	 _delay_ms(5);
	 MDIO_voidSetPinValue(GPIOB,4,LOW);
	 MSPI_voidSendData(0x02);
	 _delay_ms(5);
	 MSPI_voidSendData(copy_u16Address);
	 MSPI_voidSendData(copy_u8Data);
	 _delay_ms(5);
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
	 _delay_ms(5);
 }
 
 
 
  u8 HEEPROM_u8ReadData(u16 copy_u16Address)
  {
	  u8 Local_u8Dummy;
	  MDIO_voidSetPinValue(GPIOB,4,LOW);
	  MSPI_voidSendData(0x03);
	  MSPI_voidSendData(copy_u16Address);
	  MSPI_voidSendData(0xFF);
	  Local_u8Dummy = MSPI_voidRecieveData();
	  MDIO_voidSetPinValue(GPIOB,4,HIGH);
	  return Local_u8Dummy;
  }
