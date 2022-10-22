#ifndef LEDS_H_INCLUDED
#define LEDS_H_INCLUDED

#include <DIO/DIO_Interface.h>


#define LED0 	DIO_C2
#define LED1 	DIO_C7
#define LED2 	DIO_D3
#define BUZZER 	DIO_A3


void LED_voidInitLED(	u8 LEDPort, u8 LEDPin			);

void LED_voidWriteLED(	u8 LEDPort, u8 LEDPin, u8 val	);

void LED_voidSetLED(	u8 LEDPort, u8 LEDPin			);
void LED_voidClearLED(	u8 LEDPort, u8 LEDPin			);
void LED_voidToggleLED(	u8 LEDPort, u8 LEDPin			);

u8 	 LED_LEDState(		u8 LEDPort, u8 LEDPin			);




#endif //LEDS_H_INCLUDED