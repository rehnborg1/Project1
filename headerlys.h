#ifndef HEADERLYS_H_
#define HEADERLYS_H_

///////////////////////////////////////////// Sekvenser ////////////////////////////////////////////////////
void sekvensfram ();
void sekvensbak ();

///////////////////////////////////////////// Klockfrekvens ////////////////////////////////////////////////
#define F_CPU 16000000UL

///////////////////////////////////////////// Inkluderingsdirektiv /////////////////////////////////////////
#include <avr/io.h>
#include <util/delay.h>

///////////////////////////////////////////// Makrodefs lysdioder //////////////////////////////////////////
#define LYS1 6 // Pin 6 / PORTD6.
#define LYS2 7 // Pin 7 / PORTD7.
#define LYS3 0 // Pin 8 / PORTB0

#define LYS1_ON PORTD |= (1 << LYS1) // Tänder diod 1
#define LYS2_ON PORTD |= (1 << LYS2) // Tänder diod 2
#define LYS3_ON PORTB |= (1 << LYS3) // Tänder diod 3

#define LYS1_OFF PORTD &= ~(1 << LYS1) // Släcker diod 1
#define LYS2_OFF PORTD &= ~(1 << LYS2) // Släcker diod 2
#define LYS3_OFF PORTB &= ~(1 << LYS3) // Släcker diod 3

#define LEDS_ON PORTD |= ((1 << LYS1) | (1 << LYS2)); PORTB |= (1 << LYS3) // Tänder alla dioder
#define LEDS_OFF PORTD &= ~((1 << LYS1) | (1 << LYS2)); PORTB &= ~(1 << LYS3) // Släcker alla dioder

///////////////////////////////////////////// Makrodefs knappar ////////////////////////////////////////////
#define KNAPP1 4 // Pin 12 // PORTB4
#define KNAPP2 5 // Pin 13 // PORTB5

#define KNAPP1ON (PINB & (1 << KNAPP1))
#define KNAPP2ON (PINB & (1 << KNAPP2))




///////////////////////////////////////////// Funktioner definition////////////////////////////////////////////////
void setup(void);
void lys_off (void);
void lys_on (void);


#endif /* HEADERLYS_H_ */