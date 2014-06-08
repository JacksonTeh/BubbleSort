#include "unity.h"
#include "CharaterBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_charCompare_given_v1_more_than_v2_should_return_1(void)
{
	char v1[] = "String", v2[] = "Character";
	
	charCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(1, charCompare(&v1, &v2));
}

void test_charCompare_given_v1_equal_to_v2_should_return_0(void)
{
	char v1[] = "String", v2[] = "String";
	
	charCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(0, charCompare(&v1, &v2));
}

void test_charCompare_given_v1_less_than_v2_should_return_minus1(void)
{
	char v1[] = "Character", v2[] = "String";
	
	charCompare(&v1, &v2);
	TEST_ASSERT_EQUAL(-1, charCompare(&v1, &v2));
}

void test_charSwap_should_swap_2_strings(void)
{
	char array[][50] = {"ali", "Abu", "Zidane", "Kaka"};
	
	charSwap(array, 2, 3);
	TEST_ASSERT_EQUAL_STRING("ali", array[0]);
	TEST_ASSERT_EQUAL_STRING("Abu", array[1]);
	TEST_ASSERT_EQUAL_STRING("Kaka", array[2]);
	TEST_ASSERT_EQUAL_STRING("Zidane", array[3]);
}