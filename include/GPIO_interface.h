#ifndef		_GPIO_INTERFACE_H_  // _  reserved for the programmer 
#define		_GPIO_INTERFACE_H_

// Ø¥ÙŠØ© Ø§Ù„Ù‡Ø¨ÙŠØ¹Ù‡ Ù„Ù„ Ù…Ø³ØªØ®Ø¯Ù…

// Ø±ÙƒØ² Ù�Ù‰ Ø§Ù„rest values Ø¨ØªØ§Ø¹Øª registers in arm not set and clr only because any pin need 4 bits to configure
#define 	GPIO_U8_HIGH		1
#define		GPIO_U8_LOW			0

#define		GPIO_U8_INPUT_ANALOG    	0b0000
#define		GPIO_U8_INPUT_FLOATING  	0b0100
#define		GPIO_U8_INPUT_PULL_UP_DOWN  0b1000

// don't make configuration on somthing constant don't change pass FRQ to Function
#define		GPIO_U8_OUTPUT_10MHZ_PP  		0b0001
#define		GPIO_U8_OUTPUT_10MHZ_OD  		0b0101
#define		GPIO_U8_OUTPUT_10MHZ_AF_PP  	0b1001
#define		GPIO_U8_OUTPUT_10MHZ_AF_OD  	0b1101

#define		GPIO_U8_OUTPUT_2MHZ_PP  		0b0010
#define		GPIO_U8_OUTPUT_2MHZ_OD  		0b0110
#define		GPIO_U8_OUTPUT_2MHZ_AF_PP  		0b1010
#define		GPIO_U8_OUTPUT_2MHZ_AF_OD  		0b1110

#define		GPIO_U8_OUTPUT_50MHZ_PP  		0b0011
#define		GPIO_U8_OUTPUT_50MHZ_OD  		0b0111
#define		GPIO_U8_OUTPUT_50MHZ_AF_PP  	0b1011
#define		GPIO_U8_OUTPUT_50MHZ_AF_OD  	0b1111



#define 	MGPIO_U8_PORTA		0  // because function Take u8
#define 	MGPIO_U8_PORTB		1
#define 	MGPIO_U8_PORTC		2

#define 	GPIO_u8_PIN0		0
#define 	GPIO_u8_PIN1		1
#define 	GPIO_u8_PIN2		2
#define 	GPIO_u8_PIN3		3
#define 	GPIO_u8_PIN4		4
#define 	GPIO_u8_PIN5		5
#define 	GPIO_u8_PIN6		6
#define 	GPIO_u8_PIN7		7
#define 	GPIO_u8_PIN8		8
#define 	GPIO_u8_PIN9		9
#define 	GPIO_u8_PIN10		10
#define 	GPIO_u8_PIN11		11
#define 	GPIO_u8_PIN12		12
#define 	GPIO_u8_PIN13		13
#define 	GPIO_u8_PIN14		14
#define 	GPIO_u8_PIN15		15

void MGPIO_voidSetPinDirection(u8	Copy_u8PortID , u8	Copy_u8PinID , u8 Copy_u8Direction);
void MGPIO_voidSetPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8Value);

u8 MGPIO_voidGetPinValue(u8	Copy_u8PortID , u8	Copy_u8PinID );

void MGPIO_voidSetPortDirection(u8	Copy_u8PortID , u8	Copy_u8Direction );
void MGPIO_voidSetPortValue(u8 Copy_u8PortID , u8 Copy_u8Value );



#endif
