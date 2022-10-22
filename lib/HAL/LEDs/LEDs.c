#include "LEDs.h"




void LED_voidInitLED(	u8 LEDPort, u8 LEDPin			){
	DIO_VoidPinMode(LEDPort, LEDPin, OUTPUT);
}

void LED_voidWriteLED(	u8 LEDPort, u8 LEDPin, u8 val	){
	DIO_VoidDigitalWritePin(LEDPort, LEDPin, val);

}

void LED_voidSetLED(	u8 LEDPort, u8 LEDPin			){
	DIO_VoidDigitalWritePin(LEDPort, LEDPin, HIGH);

}


void LED_voidClearLED(	u8 LEDPort, u8 LEDPin			){
	DIO_VoidDigitalWritePin(LEDPort, LEDPin, LOW);

}


void LED_voidToggleLED(	u8 LEDPort, u8 LEDPin			){
	DIO_VoidDigitalTogglePin(LEDPort, LEDPin);
}



u8 	 LED_LEDState(		u8 LEDPort, u8 LEDPin			){
	return DIO_u8ReturnOutputValue(LEDPort, LEDPin);
}










