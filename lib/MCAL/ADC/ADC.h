#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include <General_Interrupts/General_Interrupts.h>

#include <BitMath.h>
#include <STD_Types.h>
#include <mem_map.h>

// ADC registers


#define ACSR	(*(volatile u8*)0x28)
// #define ADMUX	(*(volatile u8*)0x27)
// #define ADCSRA	(*(volatile u8*)0x26)
// #define ADCH	(*(volatile u8*)0x25)
// #define ADCL	(*(volatile u8*)0x24)

#define ADC_MUX0	0	//adc multiplexer
#define ADC_MUX1	1
#define ADC_MUX2	2
#define ADC_MUX3	3
#define ADC_MUX4	4

#define ADC_ADLAR	5	

#define ADC_REFS0	6	//ref. selection
#define ADC_REFS1	7

#define ADPS0		0
#define ADPS1		1
#define ADPS2		2

#define ADC_REFS0		6
#define ADC_REFS1		7

#define ADC_MUX0	0
#define ADC_MUX1	1
#define ADC_MUX2	2
#define ADC_MUX3	3
#define ADC_MUX4	4

void ADC_Init();
// void ADC_SetPrescalar(u8 scalarVal);
u16 ADC_Read(u8 channel);






#endif // ADC_H_INCLUDED