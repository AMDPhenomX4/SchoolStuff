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

static class TestDescription_ComplexTest_testGetA : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testGetA() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 22, "testGetA" ) {}
 void runTest() { suite_ComplexTest.testGetA(); }
} testDescription_ComplexTest_testGetA;

static class TestDescription_ComplexTest_testAdd : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testAdd() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 26, "testAdd" ) {}
 void runTest() { suite_ComplexTest.testAdd(); }
} testDescription_ComplexTest_testAdd;

static class TestDescription_ComplexTest_testSubtract : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testSubtract() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 35, "testSubtract" ) {}
 void runTest() { suite_ComplexTest.testSubtract(); }
} testDescription_ComplexTest_testSubtract;

static class TestDescription_ComplexTest_testMultiply : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testMultiply() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 41, "testMultiply" ) {}
 void runTest() { suite_ComplexTest.testMultiply(); }
} testDescription_ComplexTest_testMultiply;

#include <cxxtest/Root.cpp>
