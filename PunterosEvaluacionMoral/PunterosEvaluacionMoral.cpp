#include "moralEvualuation.h"
#include <iostream>

using namespace std;
int main()
{

    int* productPrices;
    const int length = 50;

    productPrices = new int[length];

    fillArrayWithPrices(productPrices, length); 
    cout<<"The average of all the prices is: "<<getAveragePrice(productPrices, length);

}

