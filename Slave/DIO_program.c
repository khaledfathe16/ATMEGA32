#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"


void MDIO_voidSetPinMode(u8 copy_u8PortId , u8 copy_u8PinId , u8 copy_u8PinMode)
{
	
	if(copy_u8PinId <=7)
	{
		 switch(copy_u8PortId)
		 {
			 case (GPIOA) :
			   
			   if(copy_u8PinMode == OUTPUT)
			   {
				   CLR_BIT(DIO->DDRA , copy_u8PinId);
				   SET_BIT(DIO->DDRA , copy_u8PinId);
				  
			   }
			   
			   else if(copy_u8PinMode == INPUT)
			   {
				   CLR_BIT(DIO->DDRA , copy_u8PinId);
				   
			   };break;
			 
			 case (GPIOB) :
			   
			   if(copy_u8PinMode == OUTPUT)
			   {
				   CLR_BIT(DIO->DDRB , copy_u8PinId);
				   SET_BIT(DIO->DDRB , copy_u8PinId);
				  
			   }
			   
			   else if(copy_u8PinMode == INPUT)
			   {
				   CLR_BIT(DIO->DDRB , copy_u8PinId);
				   
			   };break;
			   
			   case (GPIOC) :
			   
			   if(copy_u8PinMode == OUTPUT)
			   {
				   CLR_BIT(DIO->DDRC , copy_u8PinId);
				   SET_BIT(DIO->DDRC , copy_u8PinId);
				  
			   }
			   
			   else if(copy_u8PinMode == INPUT)
			   {
				   CLR_BIT(DIO->DDRC , copy_u8PinId);
				   
			   };break;
			   
			   case (GPIOD) :
			   
			   if(copy_u8PinMode == OUTPUT)
			   {
				   CLR_BIT(DIO->DDRD , copy_u8PinId);
				   SET_BIT(DIO->DDRD , copy_u8PinId);
				  
			   }
			   
			   else if(copy_u8PinMode == INPUT)
			   {
				   CLR_BIT(DIO->DDRD , copy_u8PinId);
				   
			   };break;
			         
			         
			 
			 default:/*Invalid*/;
		 }
		
	}
	else{
	/*
	Error
	*/
	}
	
}

void MDIO_voidSetPortMode(u8 copy_u8PortId  , u8 copy_u8PortMode)
{

if(copy_u8PortMode == HIGH)
{
	switch(copy_u8PortId)
	{
	case(GPIOA):DIO->DDRA = 0xFF;break;
	case(GPIOB):DIO->DDRB = 0xFF;break;
	case(GPIOC):DIO->DDRC = 0xFF;break;
	case(GPIOD):DIO->DDRD = 0xFF;break;
	default:/*Error*/;break;
	}
}
else if(copy_u8PortMode == LOW)
{
	switch(copy_u8PortId)
	{
	case(GPIOA):DIO->DDRA = 0x00;break;
	case(GPIOB):DIO->DDRB = 0x00;break;
	case(GPIOC):DIO->DDRC = 0x00;break;
	case(GPIOD):DIO->DDRD = 0x00;break;
	default:/*Error*/;break;
	}
}
else
{
//Error
}

}




void MDIO_voidSetPinValue(u8 copy_u8PortId , u8 copy_u8PinId , u8 copy_u8PinValue)
{
	if(copy_u8PinValue<=7)
	{
		switch(copy_u8PortId)
		{
			case (GPIOA):
			if(copy_u8PinValue == HIGH)
			{
			SET_BIT(DIO->PORTA , copy_u8PinId);
			
			}
			else if(copy_u8PinValue == LOW)
			{
			CLR_BIT(DIO->PORTA , copy_u8PinId);
			
			};break;
			
            case (GPIOB):
			if(copy_u8PinValue == HIGH)
			{
			SET_BIT(DIO->PORTB , copy_u8PinId);
			
			}
			else if(copy_u8PinValue == LOW)
			{
			CLR_BIT(DIO->PORTB , copy_u8PinId);
			
			};break;
			
			case (GPIOC):
			if(copy_u8PinValue == HIGH)
			{
			SET_BIT(DIO->PORTC , copy_u8PinId);
			
			}
			else if(copy_u8PinValue == LOW)
			{
			CLR_BIT(DIO->PORTC , copy_u8PinId);
			
			};break;
			
			case (GPIOD):
			if(copy_u8PinValue == HIGH)
			{
			SET_BIT(DIO->PORTD , copy_u8PinId);
			
			}
			else if(copy_u8PinValue == LOW)
			{
			CLR_BIT(DIO->PORTD , copy_u8PinId);
			
			};break;
			
		default:/*Invalid*/;	
		}
		
		
	}
	
	else
	{
		/*ERROR*/
		
	}
	
	
	
	
}



void MDIO_voidSetPortValue(u8 copy_u8PortId ,u8 copy_u8Value)
{

	if(copy_u8Value <= (255))
	{
	  switch(copy_u8PortId)
	  {
	  case (GPIOA) : DIO->PORTA = copy_u8Value;break;
	  case (GPIOB) : DIO->PORTB = copy_u8Value;break;
	  case (GPIOC) : DIO->PORTC = copy_u8Value;break;
	  case (GPIOD) : DIO->PORTD = copy_u8Value;break;
	  default:/*Error*/;
	  }


	}

	else {

		//Error

	}






}











u8 MDIO_u8GetPinValue(u8 copy_u8PortId , u8 copy_u8PinId)
{
 
 u8 Local_u8PinValue;
   
   if(copy_u8PinId<=7)
   {
	 switch(copy_u8PortId)
	 {
		 case (GPIOA):
		 
		Local_u8PinValue =  GET_BIT(DIO->PINA,copy_u8PinId);
		 
		 
		 ;break; 
		 
		 case (GPIOB):
		 
		Local_u8PinValue =  GET_BIT(DIO->PINB,copy_u8PinId);
		 
		 ;break; 
		 
		  case (GPIOC):
		 
		 Local_u8PinValue = GET_BIT(DIO->PINC,copy_u8PinId);
		 
		 ;break; 
		 
		 case (GPIOD):
		 
		Local_u8PinValue =  GET_BIT(DIO->PIND,copy_u8PinId);
		 
		 ;break; 
		 default:/*Invalid*/;
	 }
	 
	 
   }
    else 
	{
		/*Error*/
	}
	
	return Local_u8PinValue;
}


















