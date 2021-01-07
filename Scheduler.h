#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_


#define				NUM_OF_TASKS		3

typedef	struct
{
	u16		Periodicity;
	u16     FirstDelay;
	void    (*pf)(void);
}Task;
void	SCHeduler_voidCreateTask(u8 Copy_u8periorty , u16 Copy_u16Periodicity ,u16  Copy_u16FirstDelay , void (*ptr)(void));

void ISR(void);
void Scheduler(void);


#endif
