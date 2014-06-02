#include "unity.h"
#include "BubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_swap_given_index1_and_index2_should_swap(void)
{
	int array[] = {5, 2, 4, 8};
	
	swap(array, 0, 1);
	
	TEST_ASSERT_EQUAL(2, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
	TEST_ASSERT_EQUAL(4, array[2]);
	TEST_ASSERT_EQUAL(8, array[3]);
}

void test_singleBubbleSort_given_an_array_the_lowest_integer_should_be_at_the_first_place(void)
{
	int array[] = {5, 2};
	
	singleBubbleSort(array, 2, 2);
	
	TEST_ASSERT_EQUAL(2, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
}

void test_singleBubbleSort_given_an_sorted_array_should_do_nothing(void)
{
	int array[] = {10, 20};
	
	singleBubbleSort(array, 2, 2);
	
	TEST_ASSERT_EQUAL(10, array[0]);
	TEST_ASSERT_EQUAL(20, array[1]);
}

void test_singleBubbleSort_given_one_integer_in_array_should_do_nothing(void)
{
	int array[] = {123};
	
	singleBubbleSort(array, 1, 1);
	
	TEST_ASSERT_EQUAL(123, array[0]);
}

void test_singleBubbleSort_given_20_5_0_3_in_array_should_result_20_0_3_5(void)
{
	int array[] = {20, 5, 3, 0};
	
	singleBubbleSort(array, 3, 4);
	
	TEST_ASSERT_EQUAL(20, array[0]);
	TEST_ASSERT_EQUAL(0, array[1]);
	TEST_ASSERT_EQUAL(5, array[2]);
	TEST_ASSERT_EQUAL(3, array[3]);
}

void test_singleBubbleSort_given_20_5_0_3_in_array_should_result_20_5_0_3(void)
{
	int array[] = {20, 5, 3, 0};
	
	singleBubbleSort(array, 2, 4);
	
	TEST_ASSERT_EQUAL(20, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
	TEST_ASSERT_EQUAL(0, array[2]);
	TEST_ASSERT_EQUAL(3, array[3]);
}

void test_bubbleSort_given_20_5_3_in_array_should_result_3_5_20(void)
{
	int array[] = {20, 5, 3};
	
	bubbleSort(array, 3);
	
	TEST_ASSERT_EQUAL(3, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
	TEST_ASSERT_EQUAL(20, array[2]);
}

void test_bubbleSort_given_20_5_0_3_18_6_150_minus3_in_array_should_result_minus3_0_3_5_6_18_20_150(void)
{
	int array[] = {20, 5, 0, 3, 18, 6, 150, -3};
	
	bubbleSort(array, 8);
	
	TEST_ASSERT_EQUAL(-3, array[0]);
	TEST_ASSERT_EQUAL(0, array[1]);
	TEST_ASSERT_EQUAL(3, array[2]);
	TEST_ASSERT_EQUAL(5, array[3]);
	TEST_ASSERT_EQUAL(6, array[4]);
	TEST_ASSERT_EQUAL(18, array[5]);
	TEST_ASSERT_EQUAL(20, array[6]);
	TEST_ASSERT_EQUAL(150, array[7]);
}

void test_bubbleSort_given_20_5_in_array_should_do_nothing(void)
{
	int array[] = {20, 5};
	
	bubbleSort(array, 1);
	
	TEST_ASSERT_EQUAL(20, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
}

void test_bubbleSort_given_empty_array_should_do_nothing(void)
{
	int array[] = {20, 5};
	
	bubbleSort(array, 0);
	
	TEST_ASSERT_EQUAL(20, array[0]);
	TEST_ASSERT_EQUAL(5, array[1]);
}