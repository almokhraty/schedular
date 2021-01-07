#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_private.h"
#include "GPIO_interface.h"


// RUN TIME PASSING VALUE ?
// Range Space 



//13 14   sink current not source 
// void MGPIO_voidSetPinDirection(GPIO_U8_PORTA , GPIO_u8_PIN3 , GPIO_U8_OUTPUT_10MHZ_PP)

void MGPIO_voidSetPinDirection(u8	Copy_u8PortID , u8	Copy_u8PinID , u8 Copy_u8Direction)
{
	// rANGE Check  // check on every paramters 
	// first make components secned make scenarios 
	if ( Copy_u8PortID < 3 &&  Copy_u8PinID < 16 )
	{
		switch (Copy_u8PortID)
		{
		case MGPIO_U8_PORTA :
			// true in else if and if but it will go first inside if
			if ( Copy_u8PinID < 8)
			{
				/*  Clear 4 bits postions */
				// Casting 32 with 32 you don't know   how compiler will deal with it

				GPIO_PORTA_CRL &= ~(((u32) 0b1111 ) << (Copy_u8PinID * 4 ));

				/*  Clear 4 bits postions */
				GPIO_PORTA_CRL |= (((u32)Copy_u8Direction) << (Copy_u8PinID * 4 ));


			}
			else if ( Copy_u8PinID < 16 )
			{
				Copy_u8PinID -= 8; // becuse for me it's pin 8 but for register it pin zero
				/*  Clear 4 bits postions */
				// Casting 32 with 32 you don't know   how compiler will deal with it

				GPIO_PORTA_CRH &= ~(((u32)0b1111) << (Copy_u8PinID * 4 ));

				/*  Clear 4 bits postions */
				GPIO_PORTA_CRH |= (((u32) Copy_u8Direction) << (Copy_u8PinID * 4 ));
			}
			else
			{
				/* Return Error */
			}

			break;

		case MGPIO_U8_PORTB :

			if ( Copy_u8PinID < 8)
			{
				/*  Clear 4 bits postions */
				// Casting 32 with 32 you don't know   how compiler will deal with it

				GPIO_PORTB_CRL &= ~(((u32)0b1111) << (Copy_u8PinID * 4 ));

				/*  Clear 4 bits postions */
				GPIO_PORTB_CRL |= (((u32)Copy_u8Direction) << (Copy_u8PinID * 4 ));


			}
			else if ( Copy_u8PinID < 16 )
			{
				Copy_u8PinID -= 8; // becuse for me it's pin 8 but for register it pin zero
				/*  Clear 4 bits postions */
				// Casting 32 with 32 you don't know   how compiler will deal with it

				GPIO_PORTB_CRH &= ~(((u32)0b1111) << (Copy_u8PinID * 4 ));

				/*  Clear 4 bits postions */
				GPIO_PORTB_CRH |= (((u32)Copy_u8Direction) << (Copy_u8PinID * 4 ));
			}
			else
			{
				/* Return Error */

			}

			break;

		case MGPIO_U8_PORTC :

			if ( Copy_u8PinID < 3)
			{
				/*  Clear 4 bits postions */
				// Casting 32 with 32 you don't know   how compiler will deal with it

				GPIO_PORTC_CRL &= ~(((u32)0b1111) << (Copy_u8PinID * 4 ));

				/*  Clear 4 bits postions */
				GPIO_PORTC_CRL |= (((u32)Copy_u8Direction) << (Copy_u8PinID * 4 ));


			}

			else
			{
				/* Return Error */
			}
			break;
		}
	}
	else
	{
		/* Return Error */

	}
}
// void MGPIO_voidSetPinDirection(GPIO_U8_PORTA , GPIO_u8_PIN3 , GPIO_U8_OUTPUT_10MHZ_PP)

void MGPIO_voidSetPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8Value)
{

	if ( Copy_u8PortID < 3 &&  Copy_u8PinID < 16 )
	{
		switch (Copy_u8PortID)
		{
		case MGPIO_U8_PORTA:
			if(Copy_u8Value == GPIO_U8_HIGH)
			{
				SET_BIT(GPIO_PORTA_ODR , Copy_u8PinID);
			}
			else if ( Copy_u8Value == GPIO_U8_LOW )
			{
				CLR_BIT(GPIO_PORTA_ODR , Copy_u8PinID);
			}
			else
			{
				// Error STATUS
			}

			break;
		case MGPIO_U8_PORTB:

			if(Copy_u8Value == GPIO_U8_HIGH)
			{
				SET_BIT(GPIO_PORTB_ODR , Copy_u8PinID);
			}
			else if ( Copy_u8Value == GPIO_U8_LOW )
			{
				CLR_BIT(GPIO_PORTB_ODR , Copy_u8PinID);
			}
			else
			{
				// Error STATUS
			}
			break;


		case MGPIO_U8_PORTC:

			if(Copy_u8Value == GPIO_U8_HIGH)
			{
				SET_BIT(GPIO_PORTC_ODR , Copy_u8PinID);
			}
			else if ( Copy_u8Value == GPIO_U8_LOW )
			{
				CLR_BIT(GPIO_PORTC_ODR , Copy_u8PinID);
			}
			else
			{
				// Error STATUS
			}
			break;
		}
	}
}


u8 MGPIO_voidGetPinValue(u8	Copy_u8PortID , u8	Copy_u8PinID )
{
	// oxff
	u8 Local_u8Value = 0xff;
	if ( Copy_u8PortID < 3 &&  Copy_u8PinID < 16 )
	{
		switch (Copy_u8PortID)
		{
		case MGPIO_U8_PORTA:		Local_u8Value = GET_BIT(GPIO_PORTA_IDR , Copy_u8PinID); 		break;
		case MGPIO_U8_PORTB:		Local_u8Value = GET_BIT(GPIO_PORTB_IDR , Copy_u8PinID);		    break;
		case MGPIO_U8_PORTC:		Local_u8Value = GET_BIT(GPIO_PORTC_IDR , Copy_u8PinID); 		break;
		}
	}
	return Local_u8Value;


}


//void MGPIO_voidSetPortDirection(u8	Copy_u8PortID , u8	Copy_u8Direction );
//void MGPIO_voidSetPortValue(u8 Copy_u8PortID , u8 Copy_u8Value );
