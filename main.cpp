#include <iostream>
#include "OddEvenSeparator.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    int number;

    cout << "введите количество чисел: ";
    cin >> n;

    while (cin.fail() || n <= 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "ошибка. введите положительное число: ";
        cin >> n;
    }

    OddEvenSeparator separator;

    cout << "введите числа:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> number;
        separator.add_number(number);
    }

    separator.even();
    separator.odd();

    return 0;
}