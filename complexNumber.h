#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>
using namespace std;

template <class T1, class T2>
class ComplexNumber{
    T1 real;
    T2 imaginary;

    public:
        ComplexNumber();
        ComplexNumber(int, int);
        ComplexNumber(const ComplexNumber&);

        T1 getReal();
        T2 getImaginary();

        void setReal(T1);
        void setImaginary(T2);

        
        ComplexNumber operator +(const ComplexNumber&);
        ComplexNumber operator -(const ComplexNumber&);
        friend ostream& operator <<(ostream&,  ComplexNumber&);
};
#include "complexNumber.cpp"
#endif