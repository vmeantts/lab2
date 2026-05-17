#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double a, b, c, d;

    cout << "введите re и im первого числа: ";
    cin >> a >> b;

    cout << "введите re и im второго числа: ";
    cin >> c >> d;

    Complex z1(a, b);
    Complex z2(c, d);

    cout << "\nпервое число: ";
    z1.Print();

    cout << "тригонометрическая форма: ";
    z1.TrigPrint();

    cout << "показательная форма: ";
    z1.ExpPrint();

    cout << "\nсложение: ";
    z1.Add(z2).Print();

    cout << "вычитание: ";
    z1.Sub(z2).Print();

    cout << "умножение: ";
    z1.Mult(z2).Print();

    cout << "деление: ";
    z1.Div(z2).Print();

    return 0;
}