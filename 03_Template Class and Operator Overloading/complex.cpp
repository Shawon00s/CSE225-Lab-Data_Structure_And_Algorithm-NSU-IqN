#include <iostream>
#include "complex.h"

/*
        2. Modify the following class and overload the *(multiplication) and the != (not equal)
        operators for the class given below.
*/

using namespace std;

inline Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}

inline Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}

inline Complex Complex::operator+(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

inline Complex Complex::operator*(Complex a)
{
    Complex t;
    t.Real = (Real * a.Real) - (Imaginary * a.Imaginary);
    t.Imaginary = (Real * a.Imaginary) - (Imaginary * a.Real);
    return t;
}

inline bool Complex::operator!=(Complex a)
{
    bool t = false;
    if (Real == a.Real && Imaginary == a.Imaginary)
    {
        t = true;
    }
    return t;
}

inline void Complex::Print()
{
    cout << Real << " + " << Imaginary << "i" << endl;
}
