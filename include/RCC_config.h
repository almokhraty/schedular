#ifndef		_RCC_CONFIG_H_
#define		_RCC_CONFIG_H_


/*

	options:
		1- RCC_HSE_CRYSTAL
		2- RCC_HSI
		3- RCC_PLL
		
*/

	

#define		RCC_SYSCLK_TYPE		RCC_HSE_CRYSTAL

/*

	options:
		1- RCC_PLL_HSE
		2- RCC_PLL_HSE_DIV_BY_2
		3- RCC_PLL_HSI_DIV_BY_2
		4- RCC_PLL
		
*/
#if			RCC_SYSCLK_TYPE	==	RCC_PLL
#define		RCC_PLL_INPUT		RCC_HSE_CRYSTAL
#endif

/*

	options:
				Can be any Value from 2 to 16 

		
*/
#if			RCC_SYSCLK_TYPE	== 	RCC_PLL
	#define		RCC_PLL_MUL_VAL		2
#endif

/*
	options
	1- RCC_HSI_DIV_BY_2
	2- RCC_HSE 
*/



/*
	options
	1- RCC_HSE_DIV_BY_2
	2- RCC_HSE
*/

#if				RCC_SYSCLK_TYPE	== 	RCC_PLL
	#define		RCC_PLLSRC		==	RCC_HSE_DIV_BY_2

#endif

/*
	Options Type of peripherals
		DMA1EN		
		DMA2EN		
		SRAMEN		
		FLITFEN		
		CRCEN		
		FSMCEN		
		SDIOEN		

*/


#endif
