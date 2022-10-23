

#include <LCD/LCD_Interface.h>
#include <KeyPad/KeyPad.h>




int main(){
	
	LCD_voidInit();
	KeyPad_voidInit();

	volatile u8 prevRead	=0,
				currentRead	=0;






while(1){
	currentRead = KeyPad_u8GetRead();
	if(prevRead != currentRead){
		LCD_voidWriteData(currentRead);
	}
	_delay_ms(10);
	prevRead = currentRead;
	
}
}







