#include "SevenSegment.h"



void SEG_voidInit(){
	DIO_VoidPinMode	(SEG_A,		OUTPUT);
	DIO_VoidPinMode	(SEG_B,		OUTPUT);
	DIO_VoidPinMode	(SEG_C,		OUTPUT);
	DIO_VoidPinMode	(SEG_D,		OUTPUT);

	DIO_VoidPinMode	(SEG_DOT,	OUTPUT);
	DIO_VoidPinMode	(SEG_En1,	OUTPUT);
	DIO_VoidPinMode	(SEG_En2,	OUTPUT);

}


void SEG_voidDisplay(u8 num){
			// if num = 5;   -->     0101
	DIO_VoidDigitalWritePin(SEG_A,			(GET_BIT(num, 0))	 );
	DIO_VoidDigitalWritePin(SEG_B,			(GET_BIT(num, 1))	 );
	DIO_VoidDigitalWritePin(SEG_C,			(GET_BIT(num, 2))	 );
	DIO_VoidDigitalWritePin(SEG_D,			(GET_BIT(num, 3))	 );
}




