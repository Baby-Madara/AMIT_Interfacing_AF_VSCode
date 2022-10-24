/**
 * @author			Ahmed Farahat : @Baby-Madara ahmed.farahat1@msa.edu.eg - ahmedfarahat1177@gmail.com
 * @details			ATMega32 drivers for AMIT Kit with the following hardware (in the HAL layer)
 * @aknowledgement:	learned embedded systems interfacing from different instructors but special thanks for Moatasem El-Sayed & Sara Abd Rabbo
// ***************************************** Software Architecture ***************************************** //
	  UTILS 		||	APP		|					main.c
					|| 	HAL		|	LEDs - Buttons - SevenSegmrnt - LCD - KeyPad - ...
	STD_Types		|| 	MCAL	|			DIO - Interrupts - Timers - ...
	BIT_MATH		|| 	MEM_MAP	|				memory registers
					||
					||
// ******************************************************************************************************** //

*/


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









