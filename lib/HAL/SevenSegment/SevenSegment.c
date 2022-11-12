#include "SevenSegment.h"


void SEG_Init(){
	DIO_PinMode	(SEG_A,		OUTPUT);
	DIO_PinMode	(SEG_B,		OUTPUT);
	DIO_PinMode	(SEG_C,		OUTPUT);
	DIO_PinMode	(SEG_D,		OUTPUT);

	DIO_PinMode	(SEG_DOT,	OUTPUT);
	DIO_PinMode	(SEG_En1,	OUTPUT);
	DIO_PinMode	(SEG_En2,	OUTPUT);

}


void SEG_Display(u8 num){
	volatile u8 units = num%10,
				tens  = (u8)num/(u8)10;

	if((num>=0) && (num <100)){
		//En1 is for tens
		DIO_DigitalWritePin(SEG_A,			(GET_BIT(tens, 0))	 );
		DIO_DigitalWritePin(SEG_B,			(GET_BIT(tens, 1))	 );
		DIO_DigitalWritePin(SEG_C,			(GET_BIT(tens, 2))	 );
		DIO_DigitalWritePin(SEG_D,			(GET_BIT(tens, 3))	 );
		DIO_DigitalWritePin(SEG_En1, 	HIGH);	_delay_ms(2);	;
		DIO_DigitalWritePin(SEG_En1, 	LOW);

		//En2 is for units
		DIO_DigitalWritePin(SEG_A,			(GET_BIT(units, 0))	 );
		DIO_DigitalWritePin(SEG_B,			(GET_BIT(units, 1))	 );
		DIO_DigitalWritePin(SEG_C,			(GET_BIT(units, 2))	 );
		DIO_DigitalWritePin(SEG_D,			(GET_BIT(units, 3))	 );
		DIO_DigitalWritePin(SEG_En2, 	HIGH);	_delay_ms(2);	;
		DIO_DigitalWritePin(SEG_En2, 	LOW);
	}


}




