#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

/*		  Clock System Selction		*/
void	RCC_voidInit(void)
{	
	/* HSE Crystal 8MHZ */
	#if	RCC_SYSCLK_TYPE	==	RCC_HSE_CRYSTAL
		SET_BIT( RCC_CR   ,   HSEON    );
		SET_BIT( RCC_CR   ,   HSITRIM4 );
		SET_BIT( RCC_CFGR ,   SW0      );
		CLR_BIT( RCC_CFGR ,   SW1      );
		
	#elif	RCC_SYSCLK_TYPE == RCC_HSI
	
		SET_BIT( RCC_CR	, HSION );
		SET_BIT( RCC_CR , HSITRIM4);
		CLR_BIT( RCC_CFGR , SW0 );
		CLR_BIT( RCC_CFGR , SW1 );

		
	#elif	RCC_SYSCLK_TYPE == RCC_PLL
	
		/** PLLXTPRE CONFIGURATION **/
		
		#if    RCC_PLLXTPRE	== RCC_HSE
			CLR_BIT( RCC_CFGR, PLLXTPRE)
		#elif  RCC_PLLXTPRE	== RCC_HSE_DIV_BY_2
			SET_BIT( RCC_CFGR, PLLXTPRE)
		#endif
		
		
		
		/** PLLSRC CONFIGURATION **/
		
		#if RCC_PLLSRC	==	RCC_HSI_DIV_BY_2
			CLR_BIT( RCC_CFGR , PLLSRC)
		#elif  RCC_PLLSRC	==	RCC_HSE
			SET_BIT( RCC_CFGR , PLLSRC)	
		#endif
		
		/** PLLMUL CONFIGURATION **/
		
		#if   RCC_PLL_MUL_VAL	==	2
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )

		#elif RCC_PLL_MUL_VAL	==	3
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	4
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	5
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	6
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	7
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	8
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	9
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			CLR_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	10
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	11
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	12
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	13
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			CLR_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	14
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	15
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			CLR_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	16
			CLR_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		#elif RCC_PLL_MUL_VAL	==	16
			SET_BIT( RCC_CFGR ,  PLLMUL0 )
			SET_BIT( RCC_CFGR ,  PLLMUL1 )
			SET_BIT( RCC_CFGR ,  PLLMUL2 )
			SET_BIT( RCC_CFGR ,  PLLMUL3 )
		
		#endif
		
		/**  PLL ENABLE **/
		
		SET_BIT( RCC_CR	, PLLON );
		SET_BIT( RCC_CR , HSITRIM4);
		CLR_BIT( RCC_CFGR , SW0 );
		SET_BIT( RCC_CFGR , SW1 );
		
	#endif
}

void	RCC_voidEnable_PeripheralClock(u8 Copy_u8BusID , u8 Copy_u8PerID )// enable peripheral on which bus and which bin
{
	// u8 Copy_u8PerID pin value 
	/* Range Check */
	if( Copy_u8BusID < 32 )  /* each bit represent peripheral */
	{
		switch(Copy_u8BusID)
		{
			case RCC_AHB  :  SET_BIT( RCC_AHBENR  ,  Copy_u8PerID);	break; 
			case RCC_APB1 :  SET_BIT( RCC_APB1ENR ,  Copy_u8PerID);	break;
			case RCC_APB2 :	 SET_BIT( RCC_APB2ENR ,  Copy_u8PerID);	break;
		}
	}
	else
	{
		/* do nothing */
	}
}
	
void	RCC_voidDisable_PeripheralClock(u8 Copy_u8BusID , u8 Copy_u8PerID )
{
		/* Range Check */
	if( Copy_u8PerID < 32 )  /* each bit represent peripheral */
	{
		switch(Copy_u8BusID)
		{
			case RCC_AHB  :  CLR_BIT( RCC_AHBENR  ,  Copy_u8PerID);	break; 
			case RCC_APB1 :  CLR_BIT( RCC_APB1ENR ,  Copy_u8PerID);	break;
			case RCC_APB2 :	 CLR_BIT( RCC_APB2ENR ,  Copy_u8PerID);	break;

		}
	}
	else
	{
		/* do nothing */
	}
	
}


