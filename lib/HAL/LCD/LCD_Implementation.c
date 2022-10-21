#include "LCD_Interface.h"

u8 cursorTracer =0;

void LCD_voidCycle(){
	DIO_VoidDigitalWritePin(LCD_En, HIGH);		_delay_ms(1);
	DIO_VoidDigitalWritePin(LCD_En, LOW);		_delay_ms(1);
}


void LCD_voidInit(){

	DIO_VoidPinMode(LCD_RS, OUTPUT);
	DIO_VoidPinMode(LCD_RW, OUTPUT);
	DIO_VoidPinMode(LCD_En, OUTPUT);

	DIO_VoidPinMode(LCD_D4, OUTPUT);
	DIO_VoidPinMode(LCD_D5, OUTPUT);
	DIO_VoidPinMode(LCD_D6, OUTPUT);
	DIO_VoidPinMode(LCD_D7, OUTPUT);
	_delay_ms(100);

	// func set
	LCD_voidWriteCMD(LCD_4bit_mode);
	DIO_VoidDigitalWritePin(LCD_D7, 	1	); 	//N 0 1 line 
	DIO_VoidDigitalWritePin(LCD_D6, 	0	);	//F 0 5*7 dot character font
	LCD_voidCycle();
	_delay_us(100);

	//disp on
	LCD_voidWriteCMD(0x0F);
	_delay_us(100);

	//disp clear
	LCD_voidWriteCMD(0x01);
	_delay_ms(2);

	// entry mode set
	LCD_voidWriteCMD(0x06);





	
}

void LCD_voidWriteData(u8 data){

	DIO_VoidDigitalWritePin(LCD_RS, HIGH);
	DIO_VoidDigitalWritePin(LCD_RW, LOW);

	DIO_VoidDigitalWritePin(LCD_D7, 	GET_BIT(data,7)	);
	DIO_VoidDigitalWritePin(LCD_D6, 	GET_BIT(data,6)	);
	DIO_VoidDigitalWritePin(LCD_D5, 	GET_BIT(data,5)	);
	DIO_VoidDigitalWritePin(LCD_D4, 	GET_BIT(data,4)	);
	LCD_voidCycle();

	DIO_VoidDigitalWritePin(LCD_D7, 	GET_BIT(data,3)	);
	DIO_VoidDigitalWritePin(LCD_D6, 	GET_BIT(data,2)	);
	DIO_VoidDigitalWritePin(LCD_D5, 	GET_BIT(data,1)	);
	DIO_VoidDigitalWritePin(LCD_D4, 	GET_BIT(data,0)	);
	LCD_voidCycle();
	
	++cursorTracer;
	if(cursorTracer== 16){
		LCD_voidGoTo(1,0);
	}
	else if(cursorTracer==32){
		LCD_voidGoTo(0,0);
		cursorTracer=0;
	}

	_delay_ms(1);



}


void LCD_voidWriteCMD(u8 cmd){


	
	DIO_VoidDigitalWritePin(LCD_RS, 	LOW);
	DIO_VoidDigitalWritePin(LCD_RW, 	LOW);

	DIO_VoidDigitalWritePin(LCD_D7, 	GET_BIT( cmd,7)	);
	DIO_VoidDigitalWritePin(LCD_D6, 	GET_BIT( cmd,6)	);
	DIO_VoidDigitalWritePin(LCD_D5, 	GET_BIT( cmd,5)	);
	DIO_VoidDigitalWritePin(LCD_D4, 	GET_BIT( cmd,4)	);
	LCD_voidCycle();

	DIO_VoidDigitalWritePin(LCD_D7, 	GET_BIT( cmd,3)	);
	DIO_VoidDigitalWritePin(LCD_D6, 	GET_BIT( cmd,2)	);
	DIO_VoidDigitalWritePin(LCD_D5, 	GET_BIT( cmd,1)	);
	DIO_VoidDigitalWritePin(LCD_D4, 	GET_BIT( cmd,0)	);
	LCD_voidCycle();

	_delay_ms(2);
}






void LCD_voidWriteString(u8* str){
	while (*str != '\0'){
		LCD_voidWriteData(*str);
		++str;
	}
}





void LCD_voidClear(){
	LCD_voidWriteCMD(LCD_clr);
	cursorTracer=0;
}



void LCD_voidGoTo(u8 line, u8 col){
	LCD_voidWriteCMD(LCD_DDRAM_addr + (line*64 + col));
	cursorTracer = line*16 + col;
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Reverses a string 'str' of length 'len'
void reverse(u8 *str, s32 len){
	s32 i = 0, j = len - 1, temp;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

// Converts a given integer x to string str[].
// d is the number of digits required in the output.
// If d is more than the number of digits in x,
// then 0s are added at the beginning.

s64 intToStr(s32 x, u8 str[], s32 d){

	s64 i = 0;
	while (x){
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < d)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}

// Converts a floating-point/double number to a string.
void ftoa(float64 n, u8 *res, s32 afterpoint)
{
	u8 negFlag=0;
	if(n<0){	n=-n;			res[0]='-';		negFlag=1;	}
	
	// Extract integer part
	s32 ipart = (s32)n;
	
	// Extract floating part
	float64 fpart = n - (float64)ipart;

	// convert integer part to string
	s32 i;
	if(1==negFlag) 	{	i = intToStr(ipart, res+1, 0)+1;		}
	else			{	i = intToStr(ipart, res, 0);			}

	// check for display option after point
	if (afterpoint != 0)
	{
		res[i] = '.'; // add dot

		// Get the value of fraction part upto given no.
		// of points after dot. The third parameter
		// is needed to handle cases like 233.007
		fpart = fpart * pow(10, afterpoint);

		intToStr((s32)fpart, res + i + 1, afterpoint);
	}
}


void LCD_voidWriteInt(s64 num){
	u8 num_str[10]={0};
	sprintf((char*)num_str, 	"%d", 	(int)num);
	LCD_voidWriteString(num_str);
}



void LCD_voidWriteFloat(float64 num, u8 digits){
	u8 res[20] = {0};
	ftoa(num, res, digits);
	LCD_voidWriteString(res);
}





