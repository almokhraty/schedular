#ifndef		GPIO_PRIVAT_H_
#define		GPIO_PRIVAT_H_

				/* GPIO PORTG */

#define	 	GPIO_PORTG_BASE_ADDRESS		0x40012000

#define		GPIO_PORTG_CRL					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTG_CRH					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x04))	
#define		GPIO_PORTG_IDR					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x08))	
#define		GPIO_PORTG_ODR					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x0C))	
#define		GPIO_PORTG_BSRR					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x10))	
#define		GPIO_PORTG_BRR					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x14))	
#define		GPIO_PORTG_LCKR					*((volatile u32 *)(GPIO_PORTG_BASE_ADDRESS + 0x18))	

				
				/* GPIO PORTE */

#define 	GPIO_PORTF_BASE_ADDRESS		(0x40011C00)

#define		GPIO_PORTF_CRL					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTF_CRH					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x04))	
#define		GPIO_PORTF_IDR					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x08))	
#define		GPIO_PORTF_ODR					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x0C))	
#define		GPIO_PORTF_BSRR					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x10))	
#define		GPIO_PORTF_BRR					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x14))	
#define		GPIO_PORTF_LCKR					*((volatile u32 *)(GPIO_PORTF_BASE_ADDRESS + 0x18))	
			
				/* GPIO PORTF */

#define 	GPIO_PORTE_BASE_ADDRESS		(0x40011800)

#define		GPIO_PORTE_CRL					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTE_CRH					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x04))
#define		GPIO_PORTE_IDR					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x08))
#define		GPIO_PORTE_ODR					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x0C))
#define		GPIO_PORTE_BSRR					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x10))
#define		GPIO_PORTE_BRR					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x14))
#define		GPIO_PORTE_LCKR					*((volatile u32 *)(GPIO_PORTE_BASE_ADDRESS + 0x18))

				/* GPIO PORTD */

#define 	GPIO_PORTD_BASE_ADDRESS		0x40011400

#define		GPIO_PORTD_CRL					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTD_CRH					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x04))	
#define		GPIO_PORTD_IDR					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x08))	
#define		GPIO_PORTD_ODR					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x0C))	
#define		GPIO_PORTD_BSRR					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x10))	
#define		GPIO_PORTD_BRR					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x14))	
#define		GPIO_PORTD_LCKR					*((volatile u32 *)(GPIO_PORTD_BASE_ADDRESS + 0x18))

				/* GPIO PORTC */

#define 	GPIO_PORTC_BASE_ADDRESS		0x40011000

#define		GPIO_PORTC_CRL					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTC_CRH					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x04))	
#define		GPIO_PORTC_IDR					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x08))	
#define		GPIO_PORTC_ODR					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x0C))	
#define		GPIO_PORTC_BSRR					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x10))	
#define		GPIO_PORTC_BRR					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x14))	
#define		GPIO_PORTC_LCKR					*((volatile u32 *)(GPIO_PORTC_BASE_ADDRESS + 0x18))

				/* GPIO PORTB */

#define 	GPIO_PORTB_BASE_ADDRESS		0x40010C00

#define		GPIO_PORTB_CRL					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTB_CRH					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x04))	
#define		GPIO_PORTB_IDR					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x08))	
#define		GPIO_PORTB_ODR					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x0C))	
#define		GPIO_PORTB_BSRR					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x10))	
#define		GPIO_PORTB_BRR					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x14))	
#define		GPIO_PORTB_LCKR					*((volatile u32 *)(GPIO_PORTB_BASE_ADDRESS + 0x18))
	
				/* GPIO PORTA */

#define 	GPIO_PORTA_BASE_ADDRESS		0x40010800

#define		GPIO_PORTA_CRL					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x00))					
#define		GPIO_PORTA_CRH					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x04))	
#define		GPIO_PORTA_IDR					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x08))	
#define		GPIO_PORTA_ODR					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x0C))	
#define		GPIO_PORTA_BSRR					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x10))	
#define		GPIO_PORTA_BRR					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x14))	
#define		GPIO_PORTA_LCKR					*((volatile u32 *)(GPIO_PORTA_BASE_ADDRESS + 0x18))

		/** REGISTER GPIOx_CRL  **/

#define		MODE00			0
#define		MODE01			1
#define		CNF00			2
#define		CNF01			3
#define		MODE10			4
#define		MODE11			5
#define		CNF10			6
#define		CNF11			7
#define		MODE20			8
#define		MODE21			9
#define		CNF20			10
#define		CNF21			11
#define		MODE30			12
#define		MODE31			13
#define		CNF30			14
#define		CNF31			15
#define		MOD30			16
#define		MODE41			17
#define		CNF40			18
#define		CNF41			19
#define		MODE50			20
#define		MODE51			21
#define		CNF50			22
#define		CNF51			23
#define		MODE60			24
#define		MODE61			25
#define		CNF60			26
#define		CNF61			27
#define		MODE70			28
#define		MODE71			29
#define		CNF70			30
#define		CNF71			31

			/** REGISTER GPIOx_CRL  **/
#define		MODE80			0
#define		MODE81			1
#define		CNF80			2
#define		CNF81			3
#define		MODE90			4
#define		MODE91			5
#define		CNF90			6
#define		CNF91			7
#define		MODE100			8
#define		MODE101			9
#define		CNF100			10
#define		CNF101			11
#define		MODE200			12
#define		MODE201			13
#define		CNF200			14
#define		CNF201			15
#define		MOD300			16
#define		MODE301			17
#define		CNF300			18
#define		CNF301			19
#define		MODE400			20
#define		MODE401			21
#define		CNF400			22
#define		CNF401			23
#define		MODE500			24
#define		MODE501			25
#define		CNF500			26
#define		CNF501			27
#define		MODE600			28
#define		MODE601			29
#define		CNF600			30
#define		CNF601			31

			/** REGISTER GPIO_PORTG_IDR  **/

#define		IDR0			0
#define		IDR1			1
#define		IDR2			2
#define		IDR3			3
#define		IDR4			4
#define		IDR5			5
#define		IDR6			6
#define		IDR7			7
#define		IDR8			8
#define		IDR9			9
#define		IDR10			10
#define		IDR11			11
#define		IDR12			12
#define		IDR13			13
#define		IDR14			14
#define		IDR15			15

			/** REGISTER GPIO_PORTG_ODR  **/


#define		ODR0			0
#define		ODR1			1
#define		ODR2			2
#define		ODR3			3
#define		ODR4			4
#define		ODR5			5
#define		ODR6			6
#define		ODR7			7
#define		ODR8			8
#define		ODR9			9
#define		ODR10			10
#define		ODR11			11
#define		ODR12			12
#define		ODR13			13
#define		ODR14			14
#define		ODR15			15


			/** REGISTER  GPIOx_BRR  **/

#define		BR0			0
#define		BR1			1
#define		BR2			2
#define		BR3			3
#define		BR4			4
#define		BR5			5
#define		BR6			6
#define		BR7			7
#define		BR8			8
#define		BR9			9
#define		BR10		10
#define		BR11		11
#define		BR12		12
#define		BR13		13
#define		BR14		14
#define		BR15		15

			/** REGISTER  GPIOx_BRR  **/









#endif
