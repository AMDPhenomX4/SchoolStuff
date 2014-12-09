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
        
         Complex b = new Complex(1,1);
        c.add(b);
       TS_ASSERT_EQUALS(1,1); 
    }
    
    
};

#endif	/* COMPLEXTEST_H */

