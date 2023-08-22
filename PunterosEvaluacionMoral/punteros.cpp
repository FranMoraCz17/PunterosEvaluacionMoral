#include "moralEvualuation.h"
#include <iostream>


void fillArrayWithPrices(int*& registerbox, const int length) 
{

	srand(time(NULL));

	for (int i = 0; i < length; i++) {
		registerbox[i] = rand() % 190 + 10;
	}

}