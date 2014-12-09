#include "Complex.h"
#include <iostream>
#include <math.h>

Complex::Complex() {
}

Complex::Complex(double a) {
    Complex::a = a;
}

Complex::Complex(double a, double b) {
    Complex::a = a;
    Complex::b = b;
}

double Complex::getA() const {
    return Complex::a;
}

double Complex::getB() const{
    return Complex::b;
}


Complex Complex::add(const Complex &secondComplex)  const{
    return (Complex(Complex::a + secondComplex.getA()), (Complex::b + secondComplex.getB()));
}

Complex Complex::subtract(const Complex &secondComplex)  const{
    return (Complex(Complex::a - secondComplex.getA()), (Complex::b - secondComplex.getB()));
}

Complex Complex::multiply(const Complex &secondComplex) const {
    return (Complex(((Complex::a * secondComplex.getA())-(Complex::b * secondComplex.getB())), (((Complex::b * secondComplex.getA())+(Complex::a * secondComplex.getB())))));
}

Complex Complex::divide(const Complex &secondComplex)  const{
    double divisor;
    divisor = (secondComplex.getA() * secondComplex.getA() + secondComplex.getB() * secondComplex.getB());
    return (Complex(((Complex::a * secondComplex.getA())+(Complex::b * secondComplex.getB())) / divisor, ((Complex::b * secondComplex.getA())-(Complex::a * secondComplex.getB())) / divisor));
}

//bool Complex::equals(const Complex& secondComplex) const {
//    if (this->subtract(secondComplex) == 0)
//        return 1;
//    else
//        return 0;
//}

double Complex::abs()  const{
    return (sqrt(Complex::a * Complex::a + Complex::b * Complex::b));
}

//bool Complex::operator==(Complex &secondComplex)  const{
//    return (this->add(secondComplex));
//}
//
//bool Complex::operator!=(Complex &secondComplex)  const{
//    return (this->add(secondComplex));
//}
//
////Complex Complex::operator+=(Complex& secondComplex)  const{
////    return (this->add(secondComplex));
////}
//Complex operator+(Complex lhs, Complex& rhs){
//    
//}
//
//
//Complex::operator +=(Complex& secondComplex){
//    return(Complex(Complex::add(secondComplex)));
//}
//    
//    
//Complex::operator-=(Complex& secondComplex) const {
//    return (this->subtract(secondComplex));
//}
//
//Complex::operator/=(Complex& secondComplex) const {
//    return (this->divide(secondComplex));
//}
//
//Complex::operator*=(Complex secondComplex)  const{
//    return (this->multiply(secondComplex));
//}
//
//Complex::operator++()  const{
//    Complex test = new Complex(1);
//    return (this->add(test));
//}
//
//Complex::operator--()  const{
//    Complex test = new Complex(1);
//    return (this->subtract(test));
//}
//
//Complex::operator++(int dummy) const {
//    Complex copy = this;
//    Complex test = new Complex(1);
//    this = this->add(test);
//    return (copy);
//}
//
//Complex::operator--(int dummy)  const{
//    Complex copy = this;
//    Complex test = new Complex(1);
//    this = this->subtract(test);
//    return (copy);
//}
//Complex::operator +() const{
//    
//}
//Complex::operator -() const{
//    
//}
