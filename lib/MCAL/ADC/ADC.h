#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include <General_Interrupts/General_Interrupts.h>

#include <BitMath.h>
#include <STD_Types.h>
#include <mem_map.h>








void ADC_Init();
// void ADC_SetPrescalar(u8 scalarVal);
u16 ADC_Read(u8 channel);






#endif // ADC_H_INCLUDED