#include "Timers.h"

void (*Timers_T0__OCfPtr)(void) = NULLptr;
void (*Timers_T1a_OCfPtr)(void) = NULLptr;
void (*Timers_T1b_OCfPtr)(void) = NULLptr;
void (*Timers_T2__OCfPtr)(void) = NULLptr;

void (*Timers_T0__OVfPtr)(void) = NULLptr;
void (*Timers_T1a_OVfPtr)(void) = NULLptr;
void (*Timers_T1b_OVfPtr)(void) = NULLptr;
void (*Timers_T2__OVfPtr)(void) = NULLptr;




void Timers_T0_Init				(u8 ps, u8 mode, u8 outputCompare){
	// ps:
	WRITE_BIT(TCCR0	,CS02	,	GET_BIT(ps, 2)	),	
	WRITE_BIT(TCCR0	,CS01	,	GET_BIT(ps, 1)	),
	WRITE_BIT(TCCR0	,CS00	,	GET_BIT(ps, 0)	);

	// mode WGM0n
	WRITE_BIT(TCCR0, WGM01	,	GET_BIT(mode, 1)	),
	WRITE_BIT(TCCR0, WGM00	,	GET_BIT(mode, 0)	);

	// outputCompare
	if( !TIMERS_T0_OCPIN_DISCONNECT ){
		SET_BIT(DDRB, PIN_3);
	}
	WRITE_BIT(TCCR0, COM01	,	GET_BIT(outputCompare, 1)	),
	WRITE_BIT(TCCR0, COM00	,	GET_BIT(outputCompare, 0)	);

}

void Timers_T0_Disable			(){
	CLEAR_BIT(TCCR0, CS02);
	CLEAR_BIT(TCCR0, CS01);
	CLEAR_BIT(TCCR0, CS00);

}



void Timers_T0_FastPWM_B3		(u8 outCompVal){
	OCR0 = outCompVal;
}


















