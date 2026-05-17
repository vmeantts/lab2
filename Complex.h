#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double re;
    double im;

public:
    Complex();
    Complex(double x, double y);

    void SetRe(double value);
    void SetIm(double value);

    double GetRe();
    double GetIm();

    double Abs();
    double Arg();

    void Print();
    void TrigPrint();
    void ExpPrint();

    Complex Add(Complex z);
    Complex Sub(Complex z);
    Complex Mult(Complex z);
    Complex Div(Complex z);
};

#endif
