/*
 * moving_average.h
 *
 *  Created on: Oct 16, 2013
 *  Author: C15Brandon.Belcher
 *  Description: Functions to update and monitor a moving average.
 */

#ifndef MOVING_AVERAGE_H_
#define MOVING_AVERAGE_H_

// Moving average functions
int getAverage(int array[], unsigned int arrayLength);
void addSample(int sample, int array[], unsigned int arrayLength);

// Array functions
int max(int array[], unsigned int arrayLength);
int min(int array[], unsigned int arrayLength);
unsigned int range(int array[], unsigned int arrayLength);

#endif /* MOVING_AVERAGE_H_ */
