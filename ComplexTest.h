/* 
 * File:   ComplexTest.h
 * Author: Admin
 *
 * Created on December 8, 2014, 7:48 PM
 */

#ifndef COMPLEXTEST_H
#define	COMPLEXTEST_H

#include "Complex.h"
#include <cxxtest/TestSuite.h>
#include <string>
#include <iostream>
#include <stdlib.h>

class ComplexTest : public CxxTest::TestSuite
{
 public:
     
     Complex c;
     
     void testAdd()
    {
     // A clock set to 0, should have a 0 value for hours, minutes, and seconds.
//         Complex b;
         c = new Complex(0,0);
        c.add(Complex(5,5));
       TS_ASSERT_EQUALS(c.getA(),5); 
    }
     void testSubtract()
    {
 
       c.subtract(Complex(1,1));
       TS_ASSERT_EQUALS(c.getA(),4); 
    }
     void testMultiply()
    {
     // A clock set to 0, should have a 0 value for hours, minutes, and seconds.
//         Complex b;
        c.multiply(Complex(2,2));
       TS_ASSERT_EQUALS(c.getA(),0); 
       TS_ASSERT_EQUALS(c.getB(),16); 
    }
    
    
};

#endif	/* COMPLEXTEST_H */

