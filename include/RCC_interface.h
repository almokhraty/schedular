#ifndef		_RCC_INTERFACE_H_
#define		_RCC_INTERFACE_H_

#define		RCC_AHB			1
#define		RCC_APB1		3
#define		RCC_APB2		5

void	RCC_voidInit(void);
void	RCC_voidEnable_PeripheralClock(u8 Copy_u8BusID , u8 Copy_u8PerID ); // enable peripheral on which bus and which bin
void	RCC_voidDisable_PeripheralClock(u8 Copy_u8BusID , u8 Copy_u8PerID );



#endif
