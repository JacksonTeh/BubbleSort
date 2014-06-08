#include "unity.h"
#include "IntegerBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_integerCompare_given_v1_more_than_v2_should_return_1(void)
{
	int v1 = 3, v2 = 2;
	
	integerCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(1, integerCompare(&v1, &v2));
}
	
void test_integerCompare_given_v1_equal_to_v2_should_return_0(void)
{
	int v1 = 3, v2 = 3;
	
	integerCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(0, integerCompare(&v1, &v2));
}

void test_integerCompare_given_v1_less_than_v2_should_return_minus1(void)
{
	int v1 = 2, v2 = 3;
	
	integerCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(-1, integerCompare(&v1, &v2));
}

void test_integerSwap_should_swap_2_integers(void)
{
	int array[] = {10, 20, 50, 30};
	
	integerSwap(array, 2, 3);
	TEST_ASSERT_EQUAL(10, array[0]);
	TEST_ASSERT_EQUAL(20, array[1]);
	TEST_ASSERT_EQUAL(30, array[2]);
	TEST_ASSERT_EQUAL(50, array[3]);
}