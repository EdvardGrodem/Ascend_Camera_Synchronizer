/*
 * Camera_Synchronizator.c
 *
 * Created: 05.01.2019 10:27:36
 * Author : EdvardOlaf
 */ 

 #define F_CPU 20E6

#include <avr/io.h>

#include "Pulse_Generator.h"

//This program generates a pulse with 50 % duty cycle on PB0 at 50 Hz
int main(void)
{	
	Pulse_Generator_init(50); //Start a pulse at 50 Hz
    while (1) 
    {
	//Do nothing
    }
}

