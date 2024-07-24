#include "complexNumber.h"

int main(){
    ComplexNumber c1 (1, 2);
    ComplexNumber c2 (3, 4);

    ComplexNumber newComplex = c1 + c2;
    cout << newComplex << endl; //outputs 4+6i 
    newComplex = c1-c2;
    cout << newComplex << endl; //outputs -2+-2i 
    //Rewrite the fraction class so that it works on ints, floats, doubles, etc
    ComplexNumber c3(1.2, 2.4); 
    ComplexNumber c4(3.1, 4.1);
    newComplex = c3 + c4;
    cout << newComplex <<endl;//SHOULD OUTPUT 4.3+6.5i 
    newComplex = c3-c4;
    cout << newComplex << endl;//SHOULD OUTPUT -1.9+-1.7i 
}

ostream& operator <<(ostream& out,  ComplexNumber& rhs){
    out << rhs.real;
    out << '+';
    out << rhs.imaginary;
    out << 'i';
    return out;
}