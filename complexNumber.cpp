#include "complexNumber.h"

ComplexNumber::ComplexNumber(){
    real = imaginary = 0;
}
ComplexNumber::ComplexNumber(int r, int i){
    real = r;
    imaginary = i;
}
ComplexNumber::ComplexNumber(const ComplexNumber& rhs){
    real = rhs.real;
    imaginary = rhs.imaginary;
}

int ComplexNumber::getReal(){
    return real;
}
int ComplexNumber::getImaginary(){
    return imaginary;
}

void ComplexNumber::setReal(int r){
    real = r;
}
void ComplexNumber::setImaginary(int i){
    imaginary =i;
}


ComplexNumber ComplexNumber::operator +(const ComplexNumber& rhs){
    int tempR = real;
    int tempI = imaginary;
    tempR += rhs.real;
    tempI += rhs.imaginary;
    return ComplexNumber(tempR, tempI);
}
ComplexNumber ComplexNumber::operator -(const ComplexNumber& rhs){
    int tempR = real;
    int tempI = imaginary;
    tempR -= rhs.real;
    tempI -= rhs.imaginary;
    return ComplexNumber(tempR, tempI);
}
