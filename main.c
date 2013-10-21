/*
 *  Created on: Oct 17, 2013
 *  Author: C15Brandon.Belcher
 *  Description: Main.c to test out my movingAverages calculator.
 *  Documentation: C2C Bentley explained how to use the functions in main so
 *  that they can be tested. I then coded everything on my own.
 */

#include <msp430.h> 
#include "moving_average.h"
#define SAMPLE_SIZE 4

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	int i;
	int j;
	volatile int maxNumberInArray;
	volatile int minNumberInArray;
	volatile unsigned int rangeOfNumbersInArray;

	int output[10];
	int input[10] = {174, 162, 149, 85, 130, 149, 153, 164, 169, 173};
	int samples[SAMPLE_SIZE];

	for (i = 0; i < SAMPLE_SIZE; i++) {
		samples[i] = 0;
	}

	for (j = 0; j < 10; j++) {
		addSample(input[j], samples, SAMPLE_SIZE);
		output[j] = getAverage(samples, SAMPLE_SIZE);
	}

	maxNumberInArray = max(input, 10);
	minNumberInArray = min(input, 10);
	rangeOfNumbersInArray = range(input, 10);

	while(1){}
