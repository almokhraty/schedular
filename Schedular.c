#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"
#include "Schedular.h"


Task  Scheduler_Tasks[NUM_OF_TASKS] ;
u16   Schedular_Ticks = 0;
void	SCHeduler_voidCreateTask(u8 Copy_u8periorty , u16 Copy_u16Periodicity ,u16  Copy_u16FirstDelay , void (*ptr)(void))
{
	Scheduler_Tasks[Copy_u8periorty].Periodicity = Copy_u16Periodicity;
	Scheduler_Tasks[Copy_u8periorty].pf = ptr;
	Scheduler_Tasks[Copy_u8periorty].FirstDelay = Copy_u16FirstDelay;
}

/*  Timer 1 mse  = Interrupt   **/
/*     Tick  time of Schedular  */


void Schedular(void)
{

	for (u8 i = 0 ; i < NUM_OF_TASKS ; i++)

	{

		if ( (Schedular_Ticks - Scheduler_Tasks[i].FirstDelay ) % Scheduler_Tasks[i].Periodicity == 0)
		{
			Scheduler_Tasks[i].pf();
		}


	}
}

void ISR(void)
{


	/* call task */
	Schedular();
	Schedular_Ticks++; 
}

