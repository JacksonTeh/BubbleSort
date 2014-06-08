#include "IntegerBubbleSort.h"

/* 
 * Compare 2 integers
 * 
 * Input:
 *	 v1		is the pointer to the first value
 *	 v2		is the pointer to the second value
 *
 * Return:
 *	 1		if *v1 > *v2
 *	 0 		if *v1 = *v2
 *	-1 		if *v1 < *v2
 */
 int integerCompare(void *v1, void *v2)
 {
	int *value1 = (int *)v1;
	int *value2 = (int *)v2;
	
	if(*value1 > *value2)
		return 1;
	else if(*value1 == *value2)
		return 0;
	else
		return -1;
 }
 
 /* 
 * Swap 2 integers in the array given
 * 
 * Input:
 *	 array		is array of integers
 *	 index1		is the index of the first integer in the array
 *	 index1		is the index of the second integer in the array
 *
 * Precondition:
 *	 indices given must be within bounds of the array
 */
 void integerSwap(void *array, int index1, int index2)
 {
	int *valArray = (int *)array;
	int temp;
	
	temp = valArray[index1];
	valArray[index1] = valArray[index2];
	valArray[index2] = temp;
 }