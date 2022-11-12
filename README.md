# AMIT Interfacing AF VSCode

This is Embedded Systems interfacing course codes

<br>

## Documentation

<br>

### Author

* Ahmed Farahat:

  + @Baby-Madara
  + ahmed.farahat1@msa.edu.eg
  + ahmedfarahat1177@gmail.com
  + +201119027639

<br>

### Details

ATMega32 drivers for AMIT Kit with the following hardware (in the HAL layer). Using PlatformIO as IDE on VS Code

<br>

## Date

start date: 24-09-2022    &emsp; &emsp;     -    &emsp; &emsp; completed:     __-__-2022

### Aknowledgement

learned embedded systems interfacing from different instructors but special thanks for Moatasem El-Sayed & Sara Abd Rabbo

### Datasheet

<pre>
- ADC                 |201
- Interrupts          |
- DIO                 |
- Registers Page      ||    327
</pre>

### Pinout

<pre>
                          [PDIP]:
                     __________________
       (XCK/T0) PB0 |1       @       40| PA0 (ADC0)
           (T1) PB1 |2               39| PA1 (ADC1)
    (INT2/AIN0) PB2 |3               38| PA2 (ADC2)
     (OC0/AIN1) PB3 |4               37| PA3 (ADC3)
          (_SS) PB4 |5               36| PA4 (ADC4)
         (MOSI) PB5 |6               35| PA5 (ADC5)
         (MISO) PB6 |7               34| PA6 (ADC6)
          (SCK) PB7 |8               33| PA7 (ADC7)
             _RESET |9               32| AREF
                VCC |10   ATMega32   31| GND
                GND |11              30| AVCC
              XTAL2 |12              29| PC7 (TOSC2)
              XTAL1 |13              28| PC6 (TOSC1)
          (RXD) PD0 |14              27| PC5 (TDI)
          (TXD) PD1 |15              26| PC4 (TDO)
         (INT0) PD2 |16              25| PC3 (TMS)
         (INT1) PD3 |17              24| PC2 (TCK)
         (OC1B) PD4 |18              23| PC1 (SDA)
         (OC1A) PD5 |19              22| PC0 (SCL)
         (ICP1) PD6 |20              21| PD7 (OC2)
                    |__________________|

        * (_PIN) means inverse logic
</pre>

### SW Archeticture

<pre>
// ***************************************** Software Architecture ***************************************** //
 [UTILS]            ||      [APP]            |                        main.c
                    ||      [Services]       |        structs - classes - user-defined data types - .....
                    ||      [HAL]            |    LEDs - Buttons - SevenSegmrnt - LCD - KeyPad - ...
        STD_Types   ||      [MCAL]           |    DIO - General_Interrupts - External_Interrupts - ADC - Timers - ...
        BIT_MATH    ||      [MEM_MAPPING]    |                    MCU registers
                    ||
// ********************************************************************************************************* //
</pre>

### Warnings

- LCD and SevenSegments cannot be used together
- sevenSegments must be used with parallel programming (NO SEQUENTIAL DELAY CAN BE USED to work properly)
- 

### Main

IT IS USED FOR TESTING DRIVERS. THE DRIVER YOU WANT TO TEST, UNCOMMENT "#define TESTING_DRIVER_NAME" and type the codes you want in its section, this is for ensuring no loss of old trials
