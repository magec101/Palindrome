#include <cxxtest/TestSuite.h>

extern char palindromeMain(int argc, const char** argv);

class PalindromeTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
	void test_Unit_Test_2(){
	    
	    const char *largv[] = {"1", "HELLO"};

		TS_ASSERT_EQUALS('N', palindromeMain(2, largv));
	    
	}

}; 
