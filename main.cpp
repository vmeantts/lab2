#include <iostream>
#include "Bell.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int count;

    cout << "введите количество звонков: ";
    cin >> count;

    while (cin.fail() || count <= 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "ошибка. введите положительное число: ";
        cin >> count;
    }

    cout << "\nконтрольный вывод: " << count << endl;
    cout << "результат:\n";

    Bell bell;

    for (int i = 0; i < count; i++)
    {
        bell.sound();
    }

    return 0;
}