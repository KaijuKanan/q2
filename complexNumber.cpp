#include "complexNumber.h"
template <class T1, class T2>
ComplexNumber<class T1, class T2>::ComplexNumber(){
    real = imaginary = 0;
}
template <class T1, class T2>
ComplexNumber<class T1, class T2>::ComplexNumber(T1 r, T2 i){
    real = r;
    imaginary = i;
}
template <class T1, class T2>
ComplexNumber<class T1, class T2>::ComplexNumber(const ComplexNumber& rhs){
    real = rhs.real;
    imaginary = rhs.imaginary;
}
template <class T1, class T2>
int ComplexNumber<class T1, class T2>::getReal(){
    return real;
}
template <class T1, class T2>
int ComplexNumber<class T1, class T2>::getImaginary(){
    return imaginary;
}
template <class T1, class T2>
void ComplexNumber<class T1, class T2>::setReal(T1 r){
    real = r;
}
template <class T1, class T2>
void ComplexNumber<class T1, class T2>::setImaginary(T2 i){
    imaginary =i;
}


ComplexNumber ComplexNumber::operator +(const ComplexNumber& rhs){
    T1 tempR = real;
    T2 tempI = imaginary;
    tempR += rhs.real;
    tempI += rhs.imaginary;
    return ComplexNumber(tempR, tempI);
}
ComplexNumber ComplexNumber::operator -(const ComplexNumber& rhs){
    T1 tempR = real;
    T2 tempI = imaginary;
    tempR -= rhs.real;
    tempI -= rhs.imaginary;
    return ComplexNumber(tempR, tempI);
}
