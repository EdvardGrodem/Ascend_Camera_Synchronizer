/*
 * Pulse_Generator.h
 *
 * Created: 05.01.2019 10:46:41
 *  Author: EdvardOlaf
 */ 

#ifndef PULSE_GENERATOR_H_
#define PULSE_GENERATOR_H_

#include <avr/io.h>

//Initialize the the pulse on PB0 with a maximum of 76 Hz
void Pulse_Generator_init(int freq_hz);

#endif /* PULSE_GENERATOR_H_ */