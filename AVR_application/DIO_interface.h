#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

void MDIO_voidSetPinMode(u8 copy_u8PortId,u8 copy_u8PinId,u8 copy_u8PinMode);

void MDIO_voidSetPinValue(u8 copy_u8PortId,u8 copy_u8PinId,u8 copy_u8PinValue);

u8 MDIO_u8GetPinValue(u8 copy_u8PortId,u8 copy_u8PinId);


#define GPIOA    0
#define GPIOB    1
#define GPIOC    2
#define GPIOD    3

#define OUTPUT   0
#define INPUT    1


#define HIGH     0
#define LOW      1


#endif
