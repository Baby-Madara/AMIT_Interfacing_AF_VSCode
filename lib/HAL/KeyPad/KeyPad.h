#ifndef KEYPAD_H_INCLUDED
#define KEYPAD_H_INCLUDED

#include <DIO/DIO_Interface.h>
#include <util/delay.h>


// ROWS: INPUTS  -  COLUMNS: OUTPUTS

#define KEYPAD_R0	DIO_C0
#define KEYPAD_R1	DIO_C1
#define KEYPAD_R2	DIO_D4
#define KEYPAD_R3	DIO_C3

#define KEYPAD_C0	DIO_C4
#define KEYPAD_C1	DIO_C5
#define KEYPAD_C2	DIO_C6
#define KEYPAD_C3	DIO_D5


void KeyPad_voidInit();
u8 KeyPad_u8GetRead();



#endif	//KEYPAD_H_INCLUDED