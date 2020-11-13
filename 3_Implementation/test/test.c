#include "unity.h"
#include "unity_internals.h"
#include "test_Stationary.h"
//#include "Stationary.h"
void setUp()
{	}
void tearDown()
{	}
void test_Stationary(void)
{
    TEST_PASS_MESSAGE("PASS");
}
void test_Stationary1(void)
{
    TEST_PASS_MESSAGE("PASS");
}
int test_main(void)
{
  	UNITY_BEGIN();
    RUN_TEST(test_Stationary);
	RUN_TEST(test_Stationary1);
	return UNITY_END();
}

