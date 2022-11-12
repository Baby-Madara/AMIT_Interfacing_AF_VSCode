# AMIT_Interfacing_AF_VSCode

This is Embedded Systems interfacing course codes
it is based on Software Archeticture:



- [ ] APP :                main.c
- [ ] HAL :      Buttons - LEDs - SevenSeg - LCD
- [ ] MCAL:    DIO - 

[] UTILS: bitMath - STDTypes  


## Documentation:

### author:
Ahmed Farahat : @Baby-Madara ahmed.farahat1@msa.edu.eg - ahmedfarahat1177@gmail.com - +201119027639

### details:
ATMega32 drivers for AMIT Kit with the following hardware (in the HAL layer). Using PlatformIO as IDE on VS Code

### date:
start date: 24-09-2022			-		completed: 	__-__-2022

### aknowledgement:
learned embedded systems interfacing from different instructors but special thanks for Moatasem El-Sayed & Sara Abd Rabbo

### datasheet:
- ADC 				|201
- Interrupts		|
- DIO				|
- Registers Page 	||	327

### pinout:
<br	/><br	/><br	/><br	/><br	/>   [PDIP]:
<br> <br	/>(XCK/T0) PB0<br	/>|1-------@------40|<br	/>PA0 (ADC0)
<br> <br	/>(T1) PB1<br	/><br	/>|2<br	/><br	/><br	/><br	/>39|<br	/>PA1 (ADC1)
<br> <br	/>(INT2/AIN0) PB2<br	/>|3<br	/><br	/><br	/><br	/>38|<br	/>PA2 (ADC2)
<br> <br	/>(OC0/AIN1) PB3<br	/>|4<br	/><br	/><br	/><br	/>37|<br	/>PA3 (ADC3)
<br> <br	/>(_SS) PB4<br	/><br	/>|5<br	/><br	/><br	/><br	/>36|<br	/>PA4 (ADC4)
<br> <br	/>(MOSI) PB5<br	/><br	/>|6<br	/><br	/><br	/><br	/>35|<br	/>PA5 (ADC5)
<br> <br	/>(MISO) PB6<br	/><br	/>|7<br	/><br	/><br	/><br	/>34|<br	/>PA6 (ADC6)
<br> <br	/>(SCK) PB7<br	/><br	/>|8<br	/><br	/><br	/><br	/>33|<br	/>PA7 (ADC7)
<br> <br	/><br	/><br	/>  _RESET|9<br	/><br	/><br	/><br	/>32|<br	/>AREF
<br> <br	/><br	/><br	/><br	/> VCC|10<br	/><br	/><br	/><br	/>31|<br	/>GND
<br> <br	/><br	/><br	/><br	/> GND|11<br	/><br	/><br	/><br	/>30|<br	/>AVCC
<br> <br	/><br	/><br	/>   XTAL2|12<br	/><br	/><br	/><br	/>29|<br	/>PC7 (TOSC2)
<br> <br	/><br	/><br	/>   XTAL1|13<br	/><br	/><br	/><br	/>28|<br	/>PC6 (TOSC1)
<br> <br	/>(RXD) PD0<br	/><br	/>|14<br	/><br	/><br	/><br	/>27|<br	/>PC5 (TDI)
<br> <br	/>(TXD) PD1<br	/><br	/>|15<br	/><br	/><br	/><br	/>26|<br	/>PC4 (TDO)
<br> <br	/>(INT0) PD2<br	/><br	/>|16<br	/><br	/><br	/><br	/>25|<br	/>PC3 (TMS)
<br> <br	/>(INT1) PD3<br	/><br	/>|17<br	/><br	/><br	/><br	/>24|<br	/>PC2 (TCK)
<br> <br	/>(OC1B) PD4<br	/><br	/>|18<br	/><br	/><br	/><br	/>23|<br	/>PC1 (SDA)
<br> <br	/>(OC1A) PD5<br	/><br	/>|19<br	/><br	/><br	/><br	/>22|<br	/>PC0 (SCL)
<br> <br	/>(ICP1) PD6<br	/><br	/>|20<br	/><br	/><br	/><br	/>21|<br	/>PD7 (OC2)
<br> <br	/><br	/><br	/><br	/><br	/>|-----------------|
<br> <br	/><br	/>* (_PIN) means inverse logic
 
 
### sw_archeticture:

 ***************************************** Software Architecture ***************************************** //
 [UTILS] 		||	[APP]			|						main.c
					|| 	[Services]		|		structs - classes - user-defined data types - .....
					|| 	[HAL]			|	LEDs - Buttons - SevenSegmrnt - LCD - KeyPad - ...
		STD_Types	|| 	[MCAL]			|	DIO - General_Interrupts - External_Interrupts - ADC - Timers - ...
		BIT_MATH	|| 	[MEM_MAPPING]	|					MCU registers
					||
 ********************************************************************************************************* //
 
 
### warnings:

					-LCD and SevenSegments cannot be used together
					-sevenSegments must be used with parallel programming (NO SEQUENTIAL DELAY CAN BE USED to work properly)
					-


### main:
 			IT IS USED FOR TESTING DRIVERS. THE DRIVER YOU WANT TO TEST, UNCOMMENT "#define TESTING_DRIVER_NAME" and type the codes you want in its section, this is for ensuring no loss of old trials



