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
CxxTest::StaticSuiteDescription suiteDescription_ComplexTest( "ComplexTest.h", 18, "ComplexTest", suite_ComplexTest, Tests_ComplexTest );

static class TestDescription_ComplexTest_testGetA : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testGetA() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 24, "testGetA" ) {}
 void runTest() { suite_ComplexTest.testGetA(); }
} testDescription_ComplexTest_testGetA;

static class TestDescription_ComplexTest_testAdd : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testAdd() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 28, "testAdd" ) {}
 void runTest() { suite_ComplexTest.testAdd(); }
} testDescription_ComplexTest_testAdd;

static class TestDescription_ComplexTest_testSubtract : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testSubtract() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 38, "testSubtract" ) {}
 void runTest() { suite_ComplexTest.testSubtract(); }
} testDescription_ComplexTest_testSubtract;

static class TestDescription_ComplexTest_testMultiply : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testMultiply() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 46, "testMultiply" ) {}
 void runTest() { suite_ComplexTest.testMultiply(); }
} testDescription_ComplexTest_testMultiply;

static class TestDescription_ComplexTest_testDivide : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testDivide() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 54, "testDivide" ) {}
 void runTest() { suite_ComplexTest.testDivide(); }
} testDescription_ComplexTest_testDivide;

static class TestDescription_ComplexTest_testPlusPlus : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testPlusPlus() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 62, "testPlusPlus" ) {}
 void runTest() { suite_ComplexTest.testPlusPlus(); }
} testDescription_ComplexTest_testPlusPlus;

static class TestDescription_ComplexTest_testMinusMinus : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testMinusMinus() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 67, "testMinusMinus" ) {}
 void runTest() { suite_ComplexTest.testMinusMinus(); }
} testDescription_ComplexTest_testMinusMinus;

static class TestDescription_ComplexTest_testAddEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testAddEqual() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 72, "testAddEqual" ) {}
 void runTest() { suite_ComplexTest.testAddEqual(); }
} testDescription_ComplexTest_testAddEqual;

static class TestDescription_ComplexTest_testMinusEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testMinusEqual() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 78, "testMinusEqual" ) {}
 void runTest() { suite_ComplexTest.testMinusEqual(); }
} testDescription_ComplexTest_testMinusEqual;

static class TestDescription_ComplexTest_testTimesEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testTimesEqual() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 84, "testTimesEqual" ) {}
 void runTest() { suite_ComplexTest.testTimesEqual(); }
} testDescription_ComplexTest_testTimesEqual;

static class TestDescription_ComplexTest_testDividedEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_ComplexTest_testDividedEqual() : CxxTest::RealTestDescription( Tests_ComplexTest, suiteDescription_ComplexTest, 90, "testDividedEqual" ) {}
 void runTest() { suite_ComplexTest.testDividedEqual(); }
} testDescription_ComplexTest_testDividedEqual;

#include <cxxtest/Root.cpp>
