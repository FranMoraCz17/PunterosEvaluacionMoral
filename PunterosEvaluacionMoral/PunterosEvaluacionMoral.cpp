#include "moralEvualuation.h"
#include <iostream>

using namespace std;
int main()
{
    int amount;
    int* productPrices;
    const int length = 50;

    productPrices = new int[length];

    fillArrayWithPrices(productPrices, length); 
    float averageWithoutLower = getAveragePrice(productPrices, length); 
    cout << "The average of all the prices is: " << averageWithoutLower;

    cout << "Type an amount\n";
    cin >> amount;

    sumHigherPrices(productPrices, length, amount);


}

