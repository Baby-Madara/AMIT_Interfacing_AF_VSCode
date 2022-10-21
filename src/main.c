

#include <LCD/LCD_Interface.h>




int main(){
	
	LCD_voidInit();






while(1){
	LCD_voidWriteString("Ahmed ");		_delay_ms(1000);
	LCD_voidWriteString("Farahat ");	_delay_ms(1000);
	LCD_voidGoTo(0,2);

	LCD_voidWriteString("Ahmed ");		_delay_ms(1000);
	LCD_voidClear();					_delay_ms(1000);
	LCD_voidWriteFloat(1.5,4);			_delay_ms(2000);
	LCD_voidClear();					_delay_ms(1000);
	
}
}







