#ifndef		_RCC_PRIVATE_H_
#define		_RCC_PRIVATE_H_


#define   	RCC_BASE_ADDRESS			  (0x40021000)  
#define		RCC_CR				         *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x00))
#define		RCC_CFGR					 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x04))
#define		RCC_CIR						 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x08))
#define		RCC_APB2RSTR				 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x0C))
#define		RCC_APB1RSTR				 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x10))
#define		RCC_AHBENR					 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x14))
#define		RCC_APB2ENR					 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x18))
#define		RCC_APB1ENR					 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x1C))
#define		RCC_BDCR					 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x20))
#define		RCC_CSR 					 *((volatile u32 *)(RCC_BASE_ADDRESS+ 0x24))
	
	/** RCC_CR  Register **/
#define		HSION		0
#define		HSIRDY		1
#define		HSITRIM0	3
#define		HSITRIM1	4
#define		HSITRIM2	5
#define		HSITRIM3	6
#define		HSITRIM4	7
#define		HSICAL0		8
#define		HSICAL1		9
#define		HSICAL2		10
#define		HSICAL3		11
#define		HSICAL4		12
#define		HSICAL5		13
#define		HSICAL6		14
#define		HSICAL7		15
#define 	HSEON		16
#define		HSERDY		17
#define		HSEBYP		18
#define		CSSON		19
#define		PLLON		24	   
#define		PLLRDY		25    //status

		/** RCC_CFGR  ReGister **/
		
#define		SW0			0
#define		SW1			1
#define		SWS0		2
#define		SWS1		3
#define		HPRE0		4
#define		HPRE1		5
#define		HPRE2		6
#define		HPRE3		7
#define		PPRE10		8
#define		PPRE11		9
#define		PPRE12		10
#define		PPRE20		11
#define		PPRE21		12
#define		PPRE22		13
#define		ADCPRE0		14
#define		ADCPRE1		15
#define		PLLSRC		16
#define		PLLXTRAPE	17
#define		PLLMUL0		18
#define		PLLMUL1		19
#define		PLLMUL2		20
#define		PLLMUL3		21
#define		USBPRE		22
#define		MCO0		24
#define		MCO1		25
#define		MCO2		26

	  /** RCC_AHBENR  Register **/

#define		DMA1EN		0
#define		DMA2EN		1
#define		SRAMEN		2
#define		FLITFEN		4
#define		CRCEN		6
#define		FSMCEN		8
#define		SDIOEN		10





#endif
