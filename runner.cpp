/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "ComplexTest.h"

static ComplexTest suite_ComplexTest;

static CxxTest::List Tests_ComplexTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ComplexTest( "ComplexTest.h", 17, "ComplexTest", suite_ComplexTest, Tests_ComplexTest );

static class TestDescription_ComplexTest_testAdd : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testAdd() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 22, "testAdd" ) {}
 void runTest() { suite_ComplexTest.testAdd(); }
} testDescription_ComplexTest_testAdd;

#include <cxxtest/Root.cpp>
