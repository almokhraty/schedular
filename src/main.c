#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "NIVC_interface.h"
#include "STK_interface.h"
#include "Scheduler.h"

void Task1(void);
void Task2(void);
void Task3(void);

int main(void)
{
	/*init */

	RCC_voidInit();
	RCC_voidEnable_PeripheralClock(RCC_APB2 , 2);
	MNVIC_voidInit();
	MSTK_voidInit();

	MGPIO_voidSetPinDirection(MGPIO_U8_PORTA , GPIO_u8_PIN3 , GPIO_U8_OUTPUT_10MHZ_PP);
	MGPIO_voidSetPinDirection(MGPIO_U8_PORTA , GPIO_u8_PIN4 , GPIO_U8_OUTPUT_10MHZ_PP);
	MGPIO_voidSetPinDirection(MGPIO_U8_PORTA , GPIO_u8_PIN5 , GPIO_U8_OUTPUT_10MHZ_PP);

	SCHeduler_voidCreateTask(0 , 200 , Task1);
	SCHeduler_voidCreateTask(1 , 400 , Task2);
	SCHeduler_voidCreateTask(2 , 600 , Task3);


	MSTK_voidSetIntervalPeriodic(1000, ISR);


	while(1)
	{
		asm("NOP");
	}
	return 0;
}


void Task1(void)
{
	static u8 i = 0;  //store in .data because it initlized once 

	if ( i == 0 )
	{
		MGPIO_voidSetPinValue(MGPIO_U8_PORTA , GPIO_u8_PIN3 , GPIO_U8_HIGH);

		i = 1;
	}

	else
	{
		MGPIO_voidSetPinValue(MGPIO_U8_PORTA , GPIO_u8_PIN3 , GPIO_U8_LOW);
		/* LED OFF  */
		i = 0;

	}
}

void Task2(void)
{
	static u8 j = 0;  //store in .data because it initlized once

	if ( j == 0 )
	{
		MGPIO_voidSetPinValue(MGPIO_U8_PORTA , GPIO_u8_PIN4 , GPIO_U8_HIGH);

		j = 1;
	}

	else
	{
		MGPIO_voidSetPinValue(MGPIO_U8_PORTA , GPIO_u8_PIN4 , GPIO_U8_LOW);
		/* LED OFF  */
		j = 0;

	}
}

void Task3(void)
{
	static u8 k = 0;  //store in .data because it initlized once

	if ( k == 0 )
	{
		MGPIO_voidSetPinValue(MGPIO_U8_PORTA , GPIO_u8_PIN5 , GPIO_U8_HIGH);

		k = 1;
	}

	else
	{
		MGPIO_voidSetPinValue(MGPIO_U8_PORTA , GPIO_u8_PIN5 , GPIO_U8_LOW);
		/* LED OFF  */
		k = 0;

	}
}

