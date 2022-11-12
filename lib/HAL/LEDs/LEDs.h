#ifndef LEDS_H_INCLUDED
#define LEDS_H_INCLUDED

#include <DIO/DIO.h>


#define LED0 	DIO_C2
#define LED1 	DIO_C7
#define LED2 	DIO_D3
#define BUZZER 	DIO_A3


void LED_InitLED(	u8 LEDPort, u8 LEDPin			);

void LED_WriteLED(	u8 LEDPort, u8 LEDPin, u8 val	);

void LED_SetLED(	u8 LEDPort, u8 LEDPin			);
void LED_ClearLED(	u8 LEDPort, u8 LEDPin			);
void LED_ToggleLED(	u8 LEDPort, u8 LEDPin			);

u8 	 LED_LEDState(	u8 LEDPort, u8 LEDPin			);




#endif //LEDS_H_INCLUDED