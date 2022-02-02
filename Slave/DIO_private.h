#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

typedef struct
{
	volatile u8 PIND;
	volatile u8 DDRD;
	volatile u8 PORTD;
	
	volatile u8 PINC;
	volatile u8 DDRC;
	volatile u8 PORTC;
	
	volatile u8 PINB;
	volatile u8 DDRB;
	volatile u8 PORTB;
	
	volatile u8 PINA;
	volatile u8 DDRA;
	volatile u8 PORTA;
	
}DIO_INT;


#define DIO ((volatile DIO_INT *)(0x30))




#endif
