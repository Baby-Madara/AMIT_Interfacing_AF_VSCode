#ifndef LCD_INTERFACE_H_INCLUDED
#define LCD_INTERFACE_H_INCLUDED

// #include <string.h>

#include "../MCAL/DIO/DIO.h"

#include <stdio.h>

#include "STD_Types.h"
#include "BitMath.h"
#include <util/delay.h>

#define LCD_RS	DIO_B1
#define LCD_RW	DIO_B2
#define LCD_En	DIO_B3

#define LCD_D4 	DIO_A4
#define LCD_D5 	DIO_A5
#define LCD_D6 	DIO_A6
#define LCD_D7 	DIO_A7

// N 0 --> 1line disp
// F 0 --> 5*7 dot font

// D 0 --> disp off
// C 0 --> cursor off
// B 0 --> blink off

// i/d 1 (+1 increment mode)
// S   0 no disp shift op




typedef enum LCD_cmdSet{
	LCD_clr			= 0x01,
	LCD_4bit_mode 	= 0x22,
	LCD_DDRAM_addr	= 0x80	// 1000 0000
	
	// LCD_Init_4bit_57_2line_cursor_off_blink_off,



} LCD_cmdSet;
LCD_cmdSet LCD_Commands;

extern u8 cursorTracer;



void LCD_voidCycle();

void LCD_voidInit();

void LCD_voidWriteData(u8 data);
void LCD_voidWriteCMD(u8 cmd);

void LCD_voidWriteString(u8* str);
void LCD_voidClear();
void LCD_voidGoTo(u8 line, u8 col);


void LCD_voidWrite(s64 num);





void reverse(u8 *str, s32 len);
s64 intToStr(s32 x, u8 str[], s32 d);
void ftoa(float64 n, u8 *res, s32 afterpoint);
void LCD_voidWriteInt(s64 num);
void LCD_voidWriteFloat(float64 num, u8 digits);




#endif //LCD_INTERFACE_H_INCLUDED