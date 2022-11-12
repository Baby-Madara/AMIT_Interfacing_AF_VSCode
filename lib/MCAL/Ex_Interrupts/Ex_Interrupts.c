#include "Ex_Interrupts.h"




void (*EXT0ptr) (void) =NULLptr;



void EX_Int0_Init		(void){
	SET_BIT(GIFR, INTF0);

	CLEAR_BIT(SREG, SREG_I);
	CLEAR_BIT(GICR, INT0);
	CLEAR_BIT(	MCUCR,ISC01);		CLEAR_BIT(	MCUCR,ISC00);
	
}

void EX_Int0_Enable		(void){
	GI_Enable();
	SET_BIT(GICR, INT0);


}

void EX_Int0_Disable	(void){
	GI_Disable();
	CLEAR_BIT(GICR, INT0);

}


void EX_Int0_SignalMode	(u8 signalMode){
	if ((signalMode>=0) && (signalMode <4))
	{		WRITE_BIT(MCUCR, GET_BIT(signalMode, 0));		WRITE_BIT(MCUCR, GET_BIT(signalMode, 1));		}
}



void EX_Int0_SetCallBack( void(*ptrFn)(void) ){
	
	if(ptrFn != NULLptr){
		EXT0ptr = ptrFn;
	}

}

void __vector_1			(void){
	EXT0ptr();

}	























