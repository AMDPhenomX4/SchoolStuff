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
    return this->Complex::a;
}
double& Complex::operator[](const int & index){
    
}
double Complex::getB() const {
    return this->Complex::b;
}

string Complex::toString() const{
    double fuckyoucplusplusa = Complex::a;
    double fuckyoucplusplusb = Complex::b;
    std::ostringstream strs;
strs << fuckyoucplusplusa;
std::string str = strs.str();
    std::string a = str;
    strs << fuckyoucplusplusb;
    str = strs.str();
    std::string b = str;
    std::string output = a;
    std::ostringstream oss;
oss << a << "+" <<b<<"i"<<endl;
std::string var = oss.str();
    return(var);
}

Complex Complex::add(const Complex &secondComplex) const {
    return (Complex(Complex::a + secondComplex.getA()), (Complex::b + secondComplex.getB()));
}

Complex Complex::subtract(const Complex &secondComplex) const {
    cout<<"fuck me";
    return (Complex(Complex::a - secondComplex.getA()), (Complex::b - secondComplex.getB()));
}

Complex Complex::multiply(const Complex &secondComplex) const {
    return (Complex(((Complex::a * secondComplex.getA())-(Complex::b * secondComplex.getB())), (((Complex::b * secondComplex.getA())+(Complex::a * secondComplex.getB())))));
}

Complex Complex::divide(const Complex &secondComplex) const {
    double divisor;
    divisor = (secondComplex.getA() * secondComplex.getA() + secondComplex.getB() * secondComplex.getB());
    return (Complex(((Complex::a * secondComplex.getA())+(Complex::b * secondComplex.getB())) / divisor, ((Complex::b * secondComplex.getA())-(Complex::a * secondComplex.getB())) / divisor));
}

bool Complex::equals(const Complex &secondComplex) const {
    if (Complex::a == secondComplex.a && Complex::b == secondComplex.b)
        return 1;
    else
        return 0;
}

double Complex::abs() const {
    return (sqrt(Complex::a * Complex::a + Complex::b * Complex::b));
}

bool Complex::operator==(const Complex &secondComplex) {
    if (Complex::a == secondComplex.a && Complex::b == secondComplex.b)
        return true;
    else
        return false;
}

bool Complex::operator!=(const Complex &secondComplex) {
    if (Complex::a == secondComplex.a && Complex::b == secondComplex.b)
        return false;
    else
        return true;
}

Complex& Complex::operator+=(Complex &secondComplex) {
    Complex returnVal = this->add(secondComplex);
    return (returnVal);
}

Complex& Complex::operator-=(Complex &secondComplex) {
    Complex returnVal = this->subtract(secondComplex);
    return (returnVal);
}

Complex& Complex::operator/=(Complex &secondComplex) {
    Complex returnVal = this->divide(secondComplex);
    return (returnVal);
}

Complex& Complex::operator*=(Complex &secondComplex) {
    Complex returnVal = this->multiply(secondComplex);
    return (returnVal);
}

Complex& Complex::operator++() {

    Complex returnVal = this->add(Complex(1));
    return (returnVal);
}

Complex& Complex::operator--() {

    Complex returnVal = this->subtract(Complex(1));
    return (returnVal);
}

Complex Complex::operator++(int dummy) {
    //Complex copy = new Complex(this->a,this->b);
    int complexa = this->a;
    int complexb = this->b;
    this->add(Complex(1));
    return (Complex(complexa,complexb));
}

Complex Complex::operator--(int dummy) {
    //Complex copy = new Complex(this->a,this->b);
    int complexa = this->a;
    int complexb = this->b;
    this->subtract(Complex(1));
    return (Complex(complexa,complexb));
}
Complex Complex::operator+(){
    return(Complex(Complex::a,Complex::b));
}
Complex Complex::operator-(){
    return(Complex(Complex::a*-1,Complex::b*-1));
}
