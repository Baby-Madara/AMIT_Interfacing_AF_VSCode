#ifndef SEVENSEGMENT_H_INCLUDED
#define SEVENSEGMENT_H_INCLUDED

#include <DIO/DIO.h>

#include "util/delay.h"

#define SEG_A	DIO_A4
#define SEG_B	DIO_A5
#define SEG_C	DIO_A6
#define SEG_D	DIO_A7

#define SEG_DOT	DIO_B3

#define SEG_En1	DIO_B2
#define SEG_En2	DIO_B1


void SEG_voidInit();

void SEG_voidDisplay(u8 num);



#endif //SEVENSEGMENT_H_INCLUDED