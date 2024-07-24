#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>
using namespace std;

class ComplexNumber{
    int real, imaginary;

    public:
        ComplexNumber();
        ComplexNumber(int, int);
        ComplexNumber(const ComplexNumber&);

        int getReal();
        int getImaginary();

        void setReal(int);
        void setImaginary(int);

        
        ComplexNumber operator +(const ComplexNumber&);
        ComplexNumber operator -(const ComplexNumber&);
        friend ostream& operator <<(ostream&,  ComplexNumber&);
};
#endif