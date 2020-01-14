/*	Author: kgarc044
 *  Partner(s) Name: Richard and Bryant
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif


int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char increment;
    unsigned char countTotal;
    unsigned char countTotal2;
    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA;
	tmpB = PINB;
	tmpC = PORTC;
	countTotal = 0x00;
	countTotal2 = 0x00;
	for (increment = 0x00; increment < 0x08; increment = increment + 0x01) {
		countTotal = countTotal +  ((tmpA >> increment) & 0x01);
		//tmpA = tmpA << increment;
	}
	increment = 0x00;
	for (increment = 0x00; increment < 0x08; increment = increment + 0x01) {
                countTotal2 = countTotal2 + ((tmpB >> increment) & 0x01);
                //tmpB = tmpB << increment;
        }

	tmpC = countTotal + countTotal2;
	PORTC = tmpC;
    }
    return 1;
}
