/*
 * Delay.c
 *
 *  Edited on: 15 abril 2024
 *  Author:	J. Luis Pizano Escalante
 *  Editors: L. Gerardo Padilla Torres, luis.padilla@iteso.mx
 *  		 Ramos Romero Rodrigo
 */

/* TODO: insert other include files here. */
#include  "Delay.h"

void delay(uint16_t delay)
{
	volatile int counter, counter_2;

		for(counter_2 = 16; counter_2 > 0; counter_2--)
		{
			for(counter = delay; counter > 0; counter--);

		}
}
