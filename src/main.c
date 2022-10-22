

#include <LCD/LCD_Interface.h>
#include <KeyPad/KeyPad.h>




int main(){
	
	LCD_voidInit();
	KeyPad_voidInit();

	volatile u8 read='N';






while(1){
	read = KeyPad_u8GetRead();
	LCD_voidGoTo(0,0);
	LCD_voidWriteData(read);
	_delay_ms(10);
	
}
}







