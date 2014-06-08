#include "unity.h"
#include "DoubleBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_doubleCompare_given_v1_more_than_v2_should_return_1(void)
{
	double v1 = 3.5, v2 = 2.9;
	
	doubleCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(1, doubleCompare(&v1, &v2));
}
	
void test_doubleCompare_given_v1_equal_to_v2_should_return_0(void)
{
	double v1 = 3.4, v2 = 3.4;
	
	doubleCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(0, doubleCompare(&v1, &v2));
}

void test_doubleCompare_given_v1_less_than_v2_should_return_minus1(void)
{
	double v1 = 2.1, v2 = 3.9;
	
	doubleCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(-1, doubleCompare(&v1, &v2));
}

void test_doubleSwap_should_swap_2_doubles(void)
{
	double array[] = {10.4, 20.8, 54.6, -40.2};
	
	doubleSwap(array, 2, 3);
	TEST_ASSERT_EQUAL(10.4, array[0]);
	TEST_ASSERT_EQUAL(20.8, array[1]);
	TEST_ASSERT_EQUAL(-40.2, array[2]);
	TEST_ASSERT_EQUAL(54.6, array[3]);
}
