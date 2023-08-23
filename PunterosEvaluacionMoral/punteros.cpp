#include "moralEvualuation.h"
#include <iostream>


void fillArrayWithPrices(int*& registerBox, const int length) 
{

	srand(time(NULL));

	for (int i = 0; i < length; i++) {
		registerBox[i] = rand() % 190 + 10;
	}

}

float getAveragePrice(int*& registerBox, const int length)
{
	float average = 0;
	int sumPrices = 0;
	int lowerPrice = 0; 
	for (int i = 0; i < length; i++) {
		
		sumPrices += registerBox[i];
		if (registerBox[i] > lowerPrice) {
			lowerPrice = registerBox[i];
		}
	}
	average = (sumPrices-lowerPrice) / length;

	return average;
}

