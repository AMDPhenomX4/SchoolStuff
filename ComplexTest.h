/* 
 * File:   ComplexTest.h
 * Author: Admin
 *
 * Created on December 8, 2014, 7:48 PM
 */

#ifndef COMPLEXTEST_H
#define	COMPLEXTEST_H
//#define system.out.println(x) std::cout<<x;

#include <cxxtest/TestSuite.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Complex.h"

class ComplexTest : public CxxTest::TestSuite
{
 public:
     
     Complex c;
     Complex d;
     void testGetA(){
         Complex* test = new Complex(1,1);
cout<<test->getA()<< "THIS IS ALSO A" << endl;
     }
     void testAdd()
    {

//         Complex b;
         //c = new Complex(1,1);
         
         cout<<c.getA() << "THIS IS A"<<endl;
        //c.add(Complex(5,5));
       TS_ASSERT_EQUALS(c.add(Complex(5,5)).getA(),5); 
    }
     void testSubtract()
    {
 
       c.subtract(Complex(1,1));
       c.subtract(Complex(1,1)).toString();
       cout<<c.subtract(Complex(1,1)).toString() << "COUT" <<endl;
       TS_ASSERT_EQUALS(c.subtract(Complex(1,1)).getA(),-1); 
    }
     void testMultiply()
    {
     // A clock set to 0, should have a 0 value for hours, minutes, and seconds.
//         Complex b;
         //cout<<c.getA();
       TS_ASSERT_EQUALS(Complex(2,2).multiply(Complex(2,2)).getA(),0); 
       TS_ASSERT_EQUALS(Complex(2,2).multiply(Complex(2,2)).getB(),8); 
    }
          void testDivide()
    {
     // A clock set to 0, should have a 0 value for hours, minutes, and seconds.
//         Complex b;
         //cout<<c.getA();
       TS_ASSERT_EQUALS(Complex(2,2).divide(Complex(2,2)).getA(),1); 
       TS_ASSERT_EQUALS(Complex(2,2).divide(Complex(2,2)).getB(),0); 
    }
          void testPlusPlus(){
              c = Complex(2,2);
              c++;
              TS_ASSERT_EQUALS(c.getA(),3); 
          }
          void testMinusMinus(){
              c = Complex(2,2);
              c--;
              TS_ASSERT_EQUALS(c.getA(),1); 
          }
          void testAddEqual(){
              d = Complex(2,2);
              c = Complex(1,1);
              c+=d;
              TS_ASSERT_EQUALS(c.getA(),3)
          }
          void testMinusEqual(){
              d = Complex(2,2);
              c = Complex(1,1);
              c-=d;
              TS_ASSERT_EQUALS(c.getA(),-1)
          }
          void testTimesEqual(){
              d = Complex(4,2);
              c = Complex(1,5);
              c*=d;
              TS_ASSERT_EQUALS(c.getA(),-6)
              TS_ASSERT_EQUALS(c.getB(),4)
          }
          void testDividedEqual(){
              d = Complex(2,2);
              c = Complex(1,1);
              c/=d;
              TS_ASSERT_EQUALS(c.getA(),.5)
          }
          
          
};

#endif	/* COMPLEXTEST_H */

