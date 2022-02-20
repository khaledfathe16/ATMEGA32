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
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
	 MDIO_voidSetPinValue(GPIOB,4,LOW);
	 MSPI_voidSendData(0x06);
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
     _delay_ms(5);
	 MDIO_voidSetPinValue(GPIOB,4,LOW);
	 MSPI_voidSendData(0x02);
	 MSPI_voidSendData(copy_u16Address);
	 MSPI_voidSendData(copy_u8Data);
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
	 _delay_ms(5);
 }
 
 void HEEPROM_voidSend16Byte(u16 copy_u16Address , u8 *copy_u8Data)
 {
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
	 MDIO_voidSetPinValue(GPIOB,4,LOW);
	 MSPI_voidSendData(0x06);
	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
     _delay_ms(5);
	 MDIO_voidSetPinValue(GPIOB,4,LOW);
	 MSPI_voidSendData(0x02);
	 MSPI_voidSendData(copy_u16Address);
	 for(u8 i=0;i<=9;i++)
	 {

		 MSPI_voidSendData(copy_u8Data[i]);

	 }

	 MDIO_voidSetPinValue(GPIOB,4,HIGH);
	 _delay_ms(5);
 }

 
 
  u8 HEEPROM_u8ReadData(u16 copy_u16Address)
  {
	  u8 Local_u8Dummy=0xFF;
	  u8 Local_u8Data;
	  MDIO_voidSetPinValue(GPIOB,4,HIGH);
	  MDIO_voidSetPinValue(GPIOB,4,LOW);
	  MSPI_voidSendData(0x03);
	  MSPI_voidSendData(copy_u16Address);
	  MSPI_voidSendData(Local_u8Dummy);
	  Local_u8Data = MSPI_voidRecieveData();
	  MDIO_voidSetPinValue(GPIOB,4,HIGH);
	  return Local_u8Data;
  }
