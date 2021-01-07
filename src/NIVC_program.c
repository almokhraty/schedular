#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include  "NIVC_interface.h"
#include  "NIVC_private.h"
#include  "NIVC_config.h"
#ifndef		NULL
#define     NULL   (void *)0
#endif
// m stands for mcal //

/* Intialization  of NVIC */
/* no RCC for INVIC */
/* External Interrupt has RCC */

/* how many Groups and sub Groups */

void  MNVIC_voidInit(void) 
{
	/* because i don't make the system control block */
	#define		SCB_AIRCR			*((volatile u32 *)(0xE000ED00 + 0x0C))
	 SCB_AIRCR = NO_GROUPS_NO_SUB; 
}
/*  SET interrut priority */
void  MNVIC_voidSetInterruptPriority( u8 CopyIntNumber , u8 Copy_u8Priorty)
{	
	if ( CopyIntNumber < 60 )
	{
		NVIC_IPR[CopyIntNumber] = Copy_u8Priorty;

	}
}
void MNVIC_voidEnableInterrupt( u8 Copy_u8InterruptID)
{
	if (Copy_u8InterruptID < 32)
	{
		SET_BIT( NVIC_ISER0 , Copy_u8InterruptID);
	}
	
	else if (Copy_u8InterruptID < 60 )
	{
	    Copy_u8InterruptID -= 32;
		 SET_BIT( NVIC_ISER1 , Copy_u8InterruptID );
	}
	else
	{
		/* Return status */
		
	}
}

	void MNVIC_voidDisableInterrupt( u8 Copy_u8InterruptID)
{
	if (Copy_u8InterruptID < 32)
	{
		SET_BIT(NVIC_ICER0 , Copy_u8InterruptID);
	}
	
	else if (Copy_u8InterruptID < 60 )
	{
	    Copy_u8InterruptID -= 32;
		 SET_BIT( NVIC_ICER1 , Copy_u8InterruptID );
	}
	else
	{
		/* Return status */
		
	}
}

void MNVIC_voidSetPendingInterrupt( u8 Copy_u8InterruptID)
{
	if (Copy_u8InterruptID < 32)
	{
		SET_BIT(NVIC_ISPR0 , Copy_u8InterruptID);
	}
	
	else if (Copy_u8InterruptID < 60 )
	{
	    Copy_u8InterruptID -= 32;
		 SET_BIT( NVIC_ISPR1 , Copy_u8InterruptID );
	}
	else
	{
		/* Return status */
		
	}
}

void MNVIC_voidClearPenldingInterrupt( u8 Copy_u8InterruptID)
{
	if (Copy_u8InterruptID < 32)
	{
		SET_BIT(NVIC_ICPR0 , Copy_u8InterruptID);
	}
	
	else if (Copy_u8InterruptID < 60 )
	{
	    Copy_u8InterruptID -= 32;
		 SET_BIT( NVIC_ICPR1 , Copy_u8InterruptID );
	}
	else
	{
		/* Return status */
		
	}
}

u8 MNVIC_enuGetActiveFlag( u8 Copy_u8InterruptID , u8 *Copy_Pu8Result)
{
	u8 Local_enuError = 0;
	
	if (Copy_u8InterruptID < 32 && Copy_Pu8Result != NULL)
	{
		*Copy_Pu8Result = GET_BIT(NVIC_IABR0 , Copy_u8InterruptID);
	}
	
	else if (Copy_u8InterruptID < 60 && Copy_Pu8Result != NULL )
	{
	    Copy_u8InterruptID -= 32;
		*Copy_Pu8Result =  GET_BIT( NVIC_IABR1 , Copy_u8InterruptID );
	}
/*	else
	{
		if ( Copy_Pu8Result == Null )
		{
			
		 Return status
		Local_enuError = NULL;
		}
		else
		{
			Local_enuError = OUT_OF_RANGE;
		}
	}*/
	
	return Local_enuError;
	
}


	
	
