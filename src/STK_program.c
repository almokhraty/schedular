#include	"STD_TYPES.h"
#include	"BIT_MATH.h"

#include	"STK_interface.h"
#include	"STK_private.h"
#include	"STK_config.h"
/*Define CallBack Global Variable									*/
static void (*MSTK_CallBack)(void);
/*Define Variable for interval Mode									*/
static	u8	MSTK_u8ModeOfInterval = 0;


void	MSTK_voidInit(void)
{
	/*		Disable Systick and Interrupt and Select Clock			*/
	#if		MSTK_CLK_SRC	==		MSTK_SRC_AHB_8
			MSTK -> CTRL = 0x00000000;
	#elif	MSTK_CLK_SRC	==		MSTK_SRC_AHB
			MSTK -> CTRL = 0x00000004;
	#else
			#error"Wrong Choice Prescaller!"
	#endif
}

void	MSTK_voidSetBusyWait(u32 Copy_u32Ticks)
{
	/*Load ticks to LOAD Register			*/
	MSTK -> LOAD =	Copy_u32Ticks;
	/*	Start Count		==>	Enanle			*/
	SET_BIT(MSTK -> CTRL , 0);
	/*	Wait till flag raised	"Polling"	*/
	while(GET_BIT(MSTK -> CTRL , 16) == 0);
	/*	STOP Timer	==> Disable				*/
	CLR_BIT(MSTK -> CTRL , 0);
	MSTK -> LOAD =	0;
	MSTK -> VAL =	0;
}

void	MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks , void (*Copy_pf)(void))
{
	/* Disable Timer*/
	CLR_BIT(MSTK -> CTRL , 0);
	MSTK -> VAL = 0 ;

	/*Load ticks to LOAD Register			*/
	MSTK -> LOAD =	Copy_u32Ticks;
	/*	Start Count		==>	Enanle			*/
	SET_BIT(MSTK -> CTRL , 0);
	/*CallBack								*/
	MSTK_CallBack = Copy_pf;
	/*	Set Mode to single	(Flag)			*/
	MSTK_u8ModeOfInterval = MSTK_SINGLE_INTERVAL;
	/*	Enable	STK Interrupt				*/
	SET_BIT(MSTK -> CTRL , 1);
}

void	MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks , void (*Copy_pf)(void))
{
	/*Load ticks to LOAD Register			*/
	MSTK -> LOAD =	Copy_u32Ticks;
	/*	Start Count		==>	Enanle			*/
	SET_BIT(MSTK -> CTRL , 0);
	/*CallBack								*/
	MSTK_CallBack = Copy_pf;
	/*	Set Mode to periodic				*/
	MSTK_u8ModeOfInterval = MSTK_PERIOD_INTERVAL;
	/*	Enable	STK Interrupt				*/
	SET_BIT(MSTK -> CTRL , 1);
}


void	MSTK_voidStopInterval(void)
{
	/*	Stop Interrupt		==>	Disable			*/
	CLR_BIT(MSTK -> CTRL , 1);
	
	/*	STOP Timer	==> Disable				*/
	CLR_BIT(MSTK -> CTRL , 0);
	MSTK -> LOAD =	0;
	MSTK -> VAL =	0;
}


u32		MSTK_u32GetElapsedTicks(void)
{
	u32	Local_u32Ticks = 0;
	
	Local_u32Ticks = (MSTK -> LOAD - MSTK -> VAL);
	
	return Local_u32Ticks;
}

u32		MSTK_u32GetRemainingTicks(void)
{
	u32	Local_u32RemainingTicks = 0;
	
	Local_u32RemainingTicks = MSTK -> VAL;
	
	return Local_u32RemainingTicks;
}

void	SysTick_Handler(void)
{
	u8 Local_u8Temp = 0;
	
	if(MSTK_u8ModeOfInterval == MSTK_SINGLE_INTERVAL)
	{
		/*	Stop Interrupt		==>	Disable			*/
		CLR_BIT(MSTK -> CTRL , 1);
	
		/*	STOP Timer		==> Disable			*/
		CLR_BIT(MSTK -> CTRL , 0);
		MSTK -> LOAD =	0;
		MSTK -> VAL =	0;
	}
	/*	CallBack function "Notification"		*/
	MSTK_CallBack();
	
	/*	Clear	interrupt Flag					*/
	Local_u8Temp = GET_BIT(MSTK -> CTRL , 16);
}










