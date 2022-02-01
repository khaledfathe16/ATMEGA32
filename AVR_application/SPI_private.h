#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H


typedef struct
{
	volatile u8 SPCR;
	volatile u8 SPSR;
	volatile u8 SPDR;
	
}SPI_INT;

#define SPI ((volatile SPI_INT *)(0x2D))

#define M    0
#define S    1












#endif