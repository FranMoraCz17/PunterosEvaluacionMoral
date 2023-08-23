#include "moralEvualuation.h"
#include <iostream>


void fillArrayWithPrices(int*& registerBox, const int length) 
{

	srand(time(NULL));

	for (int i = 0; i < length; i++) {
		registerBox[i] = rand() % 190 + 10;
	}

}

float getAvearagePrices(int*& registerBox, const int length)
{
	float average = 0;
	float sumPrices = 0;
	
	for (int i = 0; i < length; i++) {
		
		sumPrices += registerBox[i];
	}
	average = sumPrices / length;

	return average;
}

float 