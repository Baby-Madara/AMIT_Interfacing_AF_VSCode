#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H

#include "DIO_Private.h"
#include <BitMath.h>

#define INPUT  	0
#define OUTPUT 	1

#define DIO_A	0
#define DIO_B	1
#define DIO_C	2
#define DIO_D	3

#define PIN_0	0
#define PIN_1	1
#define PIN_2	2
#define PIN_3	3
#define PIN_4	4
#define PIN_5	5
#define PIN_6	6
#define PIN_7	7


#define DIO_A0	DIO_A,PIN_0
#define DIO_A1	DIO_A,PIN_1
#define DIO_A2	DIO_A,PIN_2
#define DIO_A3	DIO_A,PIN_3
#define DIO_A4	DIO_A,PIN_4
#define DIO_A5	DIO_A,PIN_5
#define DIO_A6	DIO_A,PIN_6
#define DIO_A7	DIO_A,PIN_7

#define DIO_B0	DIO_B,PIN_0
#define DIO_B1	DIO_B,PIN_1
#define DIO_B2	DIO_B,PIN_2
#define DIO_B3	DIO_B,PIN_3
#define DIO_B4	DIO_B,PIN_4
#define DIO_B5	DIO_B,PIN_5
#define DIO_B6	DIO_B,PIN_6
#define DIO_B7	DIO_B,PIN_7

#define DIO_C0	DIO_C,PIN_0
#define DIO_C1	DIO_C,PIN_1
#define DIO_C2	DIO_C,PIN_2
#define DIO_C3	DIO_C,PIN_3
#define DIO_C4	DIO_C,PIN_4
#define DIO_C5	DIO_C,PIN_5
#define DIO_C6	DIO_C,PIN_6
#define DIO_C7	DIO_C,PIN_7

#define DIO_D0	DIO_D,PIN_0
#define DIO_D1	DIO_D,PIN_1
#define DIO_D2	DIO_D,PIN_2
#define DIO_D3	DIO_D,PIN_3
#define DIO_D4	DIO_D,PIN_4
#define DIO_D5	DIO_D,PIN_5
#define DIO_D6	DIO_D,PIN_6
#define DIO_D7	DIO_D,PIN_7



void DIO_VoidPinMode			(u8 port, u8 pin, 	u8 mode	);
void DIO_VoidDigitalWritePin	(u8 port, u8 pin, 	u8 val	);
void DIO_VoidDigitalTogglePin	(u8 port, u8 pin			);
u8   DIO_U8DigitalReadPin		(u8 port, u8 pin			);


void DIO_VoidPortMode			(u8 port,		 	u8 mode	);
void DIO_VoidDigitalWritePort	(u8 port,		 	u8 val	);
void DIO_VoidDigitalTogglePort	(u8 port					);
u8   DIO_U8DigitalReadPort		(u8 port					);
u8   DIO_U8DigitalReadPort		(u8 port					);
u8   DIO_U8DigitalReadPort		(u8 port					);




#endif //_DIO_INTERFACE_H
