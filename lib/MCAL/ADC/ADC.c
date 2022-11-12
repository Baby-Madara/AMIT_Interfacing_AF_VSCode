#include "ADC.h"


void ADC_Init(){
	SET_BIT(ADCSRA, ADEN);

	CLEAR_BIT(SFIOR, 4);
	
	// setting prescalar to 128:
	SET_BIT(ADCSRA, ADPS0);
	SET_BIT(ADCSRA, ADPS1);
	SET_BIT(ADCSRA, ADPS2);

	SET_BIT(	ADMUX, REFS0);
	CLEAR_BIT(	ADMUX, REFS1);

	



}

u16 ADC_Read(u8 channel){
	volatile u16 read =0;
	
	// choosing channel
	WRITE_BIT(ADMUX, MUX0, 		GET_BIT(channel, 0)	);
	WRITE_BIT(ADMUX, MUX1, 		GET_BIT(channel, 1)	);
	WRITE_BIT(ADMUX, MUX2, 		GET_BIT(channel, 2)	);
	WRITE_BIT(ADMUX, MUX3, 		GET_BIT(channel, 3)	);
	WRITE_BIT(ADMUX, MUX4, 		GET_BIT(channel, 4)	);

	SET_BIT(ADCSRA,ADSC);   //Start Conversion

	while(GET_BIT(ADCSRA, ADIF)==0)		;

	// reading value
	read = (((u16)ADCH <<8) | (ADCL));
	SET_BIT(ADCSRA, ADIF);
	return read;

}



