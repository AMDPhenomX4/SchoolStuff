#include <sstream>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

class Complex {
public:
    Complex();
    Complex(double a, double b);
    Complex(double a);
    double getA() const;
    double getB() const;
    Complex add(const Complex &secondComplex) const;
    Complex subtract(const Complex &secondComplex) const;
    Complex multiply(const Complex &secondComplex) const;
    Complex divide(const Complex &secondComplex) const;
    bool equals(const Complex &secondComplex) const;
    double abs() const;
    string toString() const;
    //you see I want to do the functiony stuff for  vvvvvv that shit


    double &operator[](const int & index);


    bool operator==(const Complex &secondComplex);
    bool operator!=(const Complex &secondComplex);
    Complex &operator+=(Complex &secondComplex);
    Complex &operator-=(Complex &secondComplex);
    Complex &operator*=(Complex &secondComplex);
    Complex &operator/=(Complex &secondComplex);
    Complex &operator++(); // Prefix ++
    Complex &operator--(); // Prefix ++

      Complex operator++(int dummy); // Postfix ++
      Complex operator--(int dummy); // Postfix --

      Complex operator+(); // Unary +  
      Complex operator-(); // Unary - 

    friend ostream &operator<<(ostream &stream, const Complex &complex);
    friend istream &operator>>(istream &stream, Complex &complex);

private:
    double a = 0;
    double b = 0;
};