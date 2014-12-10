#include "Complex.h"
#include <iostream>
#include <math.h>

Complex::Complex() {
}

Complex::Complex(double a) :a(a){};
Complex::Complex(double a, double b) : a(a), b(b) {};
//Complex::Complex(double a, double b) {
//    this->a=a;
//    this->b=b;
//}

double Complex::getA() const {
    return this->a;
}
double Complex::getB() const {
    return this->b;
}
double& Complex::operator[](const int & index){

    if(index == 0){
        return(this->a);
    }else
        return(this->b);
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
//    cout<< "AAAA "<<a;
//    cout<< "AAAAb "<<b;
oss << a << "+" <<b<<"i";
std::string var = oss.str();
    return(var);
}

Complex Complex::add(const Complex &secondComplex) const {
    return(Complex((this->a + secondComplex.getA()), (this->b + secondComplex.getB())));
}

Complex Complex::subtract(const Complex &secondComplex) const {
    //cout<<"fuck me";
    return(Complex((this->a - secondComplex.getA()), (this->b - secondComplex.getB())));
}

Complex Complex::multiply(const Complex &secondComplex) const {
    return(Complex(((this->a * secondComplex.getA())-(this->b * secondComplex.getB())), (((this->b * secondComplex.getA())+(this->a * secondComplex.getB())))));
}

Complex Complex::divide(const Complex &secondComplex) const {
    double divisor;
    divisor = (secondComplex.getA() * secondComplex.getA() + secondComplex.getB() * secondComplex.getB());
    return(Complex(((this->a * secondComplex.getA())+(this->b * secondComplex.getB())) / divisor, ((this->b * secondComplex.getA())-(this->a * secondComplex.getB())) / divisor));
}

bool Complex::equals(const Complex &secondComplex) const {
    if (this->a == secondComplex.a && this->b == secondComplex.b)
        return 1;
    else
        return 0;
}

double Complex::abs() const {
    return (sqrt(this->a* this->a+ this->b * this->b));
}

bool Complex::operator==(const Complex &secondComplex) {
    if (this->a== secondComplex.a && this->b == secondComplex.b)
        return true;
    else
        return false;
}

bool Complex::operator!=(const Complex &secondComplex) {
    if (this->a== secondComplex.a && this->b == secondComplex.b)
        return false;
    else
        return true;
}

Complex& Complex::operator+=(Complex &secondComplex) {
//    Complex returnVal = this->add(secondComplex);
    this->add(secondComplex);
    return (*this);
}

Complex& Complex::operator-=(Complex &secondComplex) {
    this->subtract(secondComplex);
    return (*this);
}

Complex& Complex::operator/=(Complex &secondComplex) {
    this->divide(secondComplex);
    return (*this);
}

Complex& Complex::operator*=(Complex &secondComplex) {
    this->multiply(secondComplex);
    return (*this);
}

Complex& Complex::operator++() {
    this->add(Complex(4,0));
    return (*this);
}

Complex& Complex::operator--() {

    Complex returnVal = this->subtract(Complex(1,0));
    return (returnVal);
}

Complex Complex::operator++(int dummy) {
    //Complex copy = new Complex(this->a,this->b);
    Complex copy(*this);
    ++(*this);
    return(copy);
}

Complex Complex::operator--(int dummy) {
    //Complex copy = new Complex(this->a,this->b);
    Complex copy(*this);
    --(*this);
    return(copy);
}
Complex Complex::operator+(){
    return(Complex(this->a,this->b));
}
Complex Complex::operator-(){
    return(Complex(this->a*-1,this->b*-1));
}
ostream &operator<<(ostream &out, Complex c)     //output
{
        out<<"real part: "<<c.getA()<<"\n";
        out<<"imag part: "<<c.getB()<<"\n";
        return out;
}
istream &operator>>(istream &in, Complex &c)     //input
{
        cout<<"enter real part:\n";
        in>>c.a;
        cout<<"enter imag part: \n";
        in>>c.b;
        return in;
}
