/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_PalindromeTest_init = false;
#include "/var/www/html/codeit/workspace/Palindrome/src/PalindromeTest.h"

static PalindromeTest suite_PalindromeTest;

static CxxTest::List Tests_PalindromeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PalindromeTest( "/var/www/html/codeit/workspace/Palindrome/src/PalindromeTest.h", 5, "PalindromeTest", suite_PalindromeTest, Tests_PalindromeTest );

static class TestDescription_suite_PalindromeTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PalindromeTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_PalindromeTest, suiteDescription_PalindromeTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_PalindromeTest.test_Unit_Test_1(); }
} testDescription_suite_PalindromeTest_test_Unit_Test_1;

static class TestDescription_suite_PalindromeTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PalindromeTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_PalindromeTest, suiteDescription_PalindromeTest, 19, "test_Unit_Test_2" ) {}
 void runTest() { suite_PalindromeTest.test_Unit_Test_2(); }
} testDescription_suite_PalindromeTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
