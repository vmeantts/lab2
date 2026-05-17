#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    re = 0;
    im = 0;
}

Complex::Complex(double x, double y)
{
    re = x;
    im = y;
}

void Complex::SetRe(double value)
{
    re = value;
}

void Complex::SetIm(double value)
{
    im = value;
}

double Complex::GetRe()
{
    return re;
}

double Complex::GetIm()
{
    return im;
}

double Complex::Abs()
{
    return sqrt(re * re + im * im);
}

double Complex::Arg()
{
    return atan2(im, re);
}

void Complex::Print()
{
    cout << re << "+i*" << im << endl;
}

void Complex::TrigPrint()
{
    cout << Abs() << "*(cos(" << Arg() << ")+i*sin(" << Arg() << "))" << endl;
}

void Complex::ExpPrint()
{
    cout << Abs() << "*e^i" << Arg() << endl;
}

Complex Complex::Add(Complex z)
{
    return Complex(re + z.re, im + z.im);
}

Complex Complex::Sub(Complex z)
{
    return Complex(re - z.re, im - z.im);
}

Complex Complex::Mult(Complex z)
{
    return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

Complex Complex::Div(Complex z)
{
    double denominator = z.re * z.re + z.im * z.im;

    return Complex(
        (re * z.re + im * z.im) / denominator,
        (im * z.re - re * z.im) / denominator
    );
}