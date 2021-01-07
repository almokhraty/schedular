#ifndef    _NVIC_INTERFACE_H_
#define    _NVIC_INTERFACE_H_

void  MNVIC_voidInit(void);
void MNVIC_voidEnableInterrupt( u8 Copy_u8InterruptID);
void MNVIC_voidDisableInterrupt( u8 Copy_u8InterruptID);
void MNVIC_voidSetPendingInterrupt( u8 Copy_u8InterruptID);
void MNVIC_voidClearPenldingInterrupt( u8 Copy_u8InterruptID);
u8 	MNVIC_enuGetActiveFlag( u8 Copy_u8InterruptID , u8 *Copy_Pu8Result);
void  MNVIC_voidSetInterruptPriority( u8 CopyIntNumber , u8 Copy_u8Priorty);
void  EXTI0_voidSetCallBack( void ( *pf) (void));
#endif 
