#include "Timers.h"

void (*Timers_T0__OCfPtr)(void) = NULLptr;
void (*Timers_T1a_OCfPtr)(void) = NULLptr;
void (*Timers_T1b_OCfPtr)(void) = NULLptr;
void (*Timers_T2__OCfPtr)(void) = NULLptr;

void (*Timers_T0__OVfPtr)(void) = NULLptr;
void (*Timers_T1a_OVfPtr)(void) = NULLptr;
void (*Timers_T1b_OVfPtr)(void) = NULLptr;
void (*Timers_T2__OVfPtr)(void) = NULLptr;




void Timers_T0_Init				(u8 ps, u8 mode, u8 outputCompareMode, u8 OutputCompareVal){
	// ps (Clk Src):
	WRITE_BIT(TCCR0, CS02	,	GET_BIT(ps, 2)	),	
	WRITE_BIT(TCCR0, CS01	,	GET_BIT(ps, 1)	),
	WRITE_BIT(TCCR0, CS00	,	GET_BIT(ps, 0)	);

	// Wave Generation mode WGM0n
	WRITE_BIT(TCCR0, WGM01	,	GET_BIT(mode, 1)	),
	WRITE_BIT(TCCR0, WGM00	,	GET_BIT(mode, 0)	);

	// Compare Output Mode COM
	if( !TIMERS_T0_OCPIN_DISCONNECT ){		SET_BIT(DDRB, PIN_3);	}
	WRITE_BIT(TCCR0, COM01	,	GET_BIT(outputCompareMode, 1)	),
	WRITE_BIT(TCCR0, COM00	,	GET_BIT(outputCompareMode, 0)	);

	OCR0 = OutputCompareVal;

}

void Timers_T0_Disable			(){
	CLEAR_BIT(TCCR0, CS02);
	CLEAR_BIT(TCCR0, CS01);
	CLEAR_BIT(TCCR0, CS00);

}



void Timers_T0_FastPWM_B3		(u8 outCompVal){
	OCR0 = outCompVal;
}






void Timers_T0_CompMtchSetCallBack		(void (*ptr)(void)){
}


void Timers_T0_OverFlowSetCallBack		(void (*ptr)(void)){

}


void Timers_T0_IntCompMtchEnable		(){
	GI_Enable();
	SET_BIT(TIFR, OCF0);  
	SET_BIT(TIMSK, OCIE0);

}


void Timers_T0_IntCompMtchDisable		(){

}


void Timers_T0_IntOverFlowEnable		(){

}


void Timers_T0_IntOverFlowDisable		(){

}


u8   Timers_T0_ReturnCurrentTime		(){
	return TCNT0;

}


void Timers_T0_phCorrectPWM_B3	(u8 outCompVal){

}


void Timers_T0_waveGenerate_B3	(u8 outCompVal){

}



void Timers_T0_ForceOutputCompare(){ //doesnt generate interrupt
	//can be used if WG mode is a non-PWM mode
	SET_BIT(TCCR0, FOC0);
}











