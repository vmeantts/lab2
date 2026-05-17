#include <iostream>
#include "OddEvenSeparator.h"

using namespace std;

void OddEvenSeparator::add_number(int number)
{
    if (number % 2 == 0)
    {
        evenNumbers.push_back(number);
    }
    else
    {
        oddNumbers.push_back(number);
    }
}

void OddEvenSeparator::even()
{
    cout << "четные: ";

    for (int i = 0; i < evenNumbers.size(); i++)
    {
        cout << evenNumbers[i] << " ";
    }

    cout << endl;
}

void OddEvenSeparator::odd()
{
    cout << "нечетные: ";

    for (int i = 0; i < oddNumbers.size(); i++)
    {
        cout << oddNumbers[i] << " ";
    }

    cout << endl;
}