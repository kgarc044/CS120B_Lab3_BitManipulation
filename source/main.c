/*	Author: rmanz004
 *  Partner(s) Name: Bryant and Kyle
 *	Lab Section: 022
 *	Assignment: Lab #3  Exercise #4
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

	DDRD = 0x00; PORTD = 0xFF;
	DDRB = 0xFE; PORTB = 0x01;

	unsigned short weightSensor = 0x0000;
	unsigned char tempVar = 0x00;
	unsigned char out = 0x00;

	while(1) {
		weightSensor = PIND << 1;
		tempVar = PINB & 0x01;

		weightSensor = weightSensor | temp;

		if (weightSensor >= 0x0046){
			out = 0x02;
		}
		else if ((weightSensor < 0x0046) && (weightSensor > 0x0005)){
			out = 0x04;
		}

		PORTB = out;
		out = 0x01;
		weightSensor = 0x0000;
		

	}

}
