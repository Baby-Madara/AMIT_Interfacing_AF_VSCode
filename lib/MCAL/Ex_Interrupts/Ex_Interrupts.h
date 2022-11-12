#ifndef EX_INTERRUPTS_H_INCLUDED
#define EX_INTERRUPTS_H_INCLUDED

#include <mem_map.h>

#include <General_Interrupts/General_Interrupts.h>

#include "Ex_Interrupts_Private.h"
#include "STD_Types.h"
#include "BitMath.h"


#define EXT_INT_LOW		0
#define EXT_INT_LOGICAL	1
#define EXT_INT_FALLING	2
#define EXT_INT_RISING	3



void EX_Int0_Init		(void);
void EX_Int0_Enable		(void);
void EX_Int0_Disable	(void);

void EX_Int0_SignalMode(u8 signalMode);
void EX_Int0_SetCallBack( void(*ptrFn)(void) );
void __vector_1(void) __attribute__((used)); 			//__attribute((signal)) for preventing optimization - or __attribute((signal)) in PlatformIO















#endif // EX_INTERRUPTS_H_INCLUDED
