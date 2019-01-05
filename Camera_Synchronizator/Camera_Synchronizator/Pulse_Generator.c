/*
 * Pulse_Generator.c
 *
 * Created: 05.01.2019 10:46:57
 *  Author: EdvardOlaf
 */ 

 #include "Pulse_Generator.h"

 #define PRE_SCALAR 4

//Initialize the the pulse on PB0 with a maximum of 76 Hz
 void Pulse_Generator_init(int freq_hz) {

	TCA0.SINGLE.CTRLA = TCA_SINGLE_CLKSEL_DIV4_gc; //Set prescalar
	
	TCA0.SINGLE.CTRLB |= TCA_SINGLE_WGMODE_SS_gc; //Set Single-slope PWM Mode

	PORTB_DIRSET = 1; //Set PB0 to output
	TCA0.SINGLE.CTRLB |= TCA_SINGLE_CMP0EN_bm; //Enable output on CMP1/WO0/PB0
	TCA0.SINGLE.PER = 20000000/(PRE_SCALAR*freq_hz)-1;//Set TOP
	TCA0.SINGLE.CMP0 = TCA0.SINGLE.PER/2; //Generate a pulse with 50% duty cycle

	TCA0.SINGLE.CTRLA |= TCA_SINGLE_ENABLE_bm; //Enable timer
 }
