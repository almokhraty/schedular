#ifndef    _NVIC_PRIVATE_H_
#define    _NVIC_PRIVATE_H_

#define		BASE_ADDRESS  	 (0xE000E100)

#define		NVIC_ISER0		*(( volatile u32 *)( BASE_ADDRESS + 0x000 ))
#define		NVIC_ISER1		*(( volatile u32 *)( BASE_ADDRESS + 0x004 ))
#define		NVIC_ISER2		*(( volatile u32 *)( BASE_ADDRESS + 0x008 ))

#define		NVIC_ICER0		*(( volatile u32 *)( BASE_ADDRESS + 0x080 ))
#define		NVIC_ICER1		*(( volatile u32 *)( BASE_ADDRESS + 0x084 ))
#define		NVIC_ICER2		*(( volatile u32 *)( BASE_ADDRESS + 0x088 ))

#define		NVIC_ISPR0		*(( volatile u32 *)( BASE_ADDRESS + 0x100 ))
#define		NVIC_ISPR1		*(( volatile u32 *)( BASE_ADDRESS + 0x104 ))
#define		NVIC_ISPR2		*(( volatile u32 *)( BASE_ADDRESS + 0x108 ))

#define		NVIC_ICPR0		*(( volatile u32 *)( BASE_ADDRESS + 0x180))
#define		NVIC_ICPR1		*(( volatile u32 *)( BASE_ADDRESS + 0x184 ))
#define		NVIC_ICPR2		*(( volatile u32 *)( BASE_ADDRESS + 0x188 ))

#define		NVIC_IABR0		*(( volatile u32 *)( BASE_ADDRESS + 0x200 ))
#define		NVIC_IABR1		*(( volatile u32 *)( BASE_ADDRESS + 0x204 ))
#define		NVIC_IABR2		*(( volatile u32 *)( BASE_ADDRESS + 0x208 ))

#define  NVIC_4BITS_GROUP_0BITS_SUB 	 0x05FA0300
#define  NVIC_3BITS_GROUP_1BITS_SUB   	0x05FA0400
#define  NVIC_2BITS_GROUP_2BITS_SUB   	0x05FA0500
#define  NVIC_1BITS_GROUP_3BITS_SUB   	0x05FA0600
#define  NVIC_0BITS_GROUP_4BITS_SUB   	0x05FA0700

#define		NVIC_IPR		(( volatile u8 *)( BASE_ADDRESS + 0x300 ))

/*
#define		NVIC_IPR0		*(( volatile u8 *)( BASE_ADDRESS + 0x300 ))
#define		NVIC_IPR1		*(( volatile u8 *)( BASE_ADDRESS + 0x301 ))
#define		NVIC_IPR2		*(( volatile u8 *)( BASE_ADDRESS + 0x302 ))
#define		NVIC_IPR3		*(( volatile u8 *)( BASE_ADDRESS + 0x303))
#define		NVIC_IPR5		*(( volatile u8 *)( BASE_ADDRESS + 0x304 ))
#define		NVIC_IPR6		*(( volatile u8 *)( BASE_ADDRESS + 0x305 ))
#define		NVIC_IPR7		*(( volatile u8 *)( BASE_ADDRESS + 0x300 ))
#define		NVIC_IPR8		*(( volatile u8 *)( BASE_ADDRESS + 0x300 ))
#define		NVIC_IPR9		*(( volatile u8 *)( BASE_ADDRESS + 0x300 ))
#define		NVIC_IPR10		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR11		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR12		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR13		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR14		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR15		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR16		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR17		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR18		*(( volatile u8 *)( BASE_ADDRESS +0x300	))
#define		NVIC_IPR19		*(( volatile u8 *)( BASE_ADDRESS +0x300	 ))
#define		NVIC_IPR20		*(( volatile u8 *)( BASE_ADDRESS +0x300	 ))



*/



#endif 
