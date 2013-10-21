/*
 * movingAverage.c
 *
 *  Created on: Oct 16, 2013
 *  Author: C15Brandon.Belcher
 *  Description: Helper functions to determine a moving average.
 */

//determine the average in a given array of integers
int getAverage(int array[], unsigned int arrayLength) {
	int i;
	int sum = 0;
	int avg = 0;
	for (i = 0; i < arrayLength; i++) {
		sum += array[i];
	}
	avg = sum / arrayLength;
	return avg;
}

//add an integer to the last index of an array and kick out the first integer
void addSample(int sample, int array[], unsigned int arrayLength) {
	int i;
	for (i = 0; i < arrayLength; i++) {
		array[i] = array[i + 1];
	}
	array[arrayLength - 1] = sample;
}

//determine the max number in a given array
int max(int array[], unsigned int arrayLength) {
	int i;
	int max = array[0];
	for (i = 1; i < arrayLength; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

//determine the minimum number in a given array
int min(int array[], unsigned int arrayLength) {
	int i;
	int min = array[0];
	for (i = 1; i < arrayLength; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

//determine the range of the numbers by subtracting the minimum from the maximum
unsigned int range(int array[], unsigned int arrayLength) {
	int rangeForArray = max(array, arrayLength) - min(array, arrayLength);
	return (unsigned int) rangeForArray;
}

