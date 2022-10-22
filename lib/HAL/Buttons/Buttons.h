#ifndef BUTTONS_H_INCLUDED
#define BUTTONS_H_INCLUDED

#include <DIO/DIO_Interface.h>


#define BUTTON_BTN0 DIO_B0
#define BUTTON_BTN1 DIO_D6
#define BUTTON_BTN2 DIO_D2

void 	Button_InitNoPullUp	(u8 port, u8 pin);
void 	Button_InitPullUp	(u8 port, u8 pin);

u8 		Button_GetValue		(u8 port, u8 pin);



#endif //BUTTONS_H_INCLUDED