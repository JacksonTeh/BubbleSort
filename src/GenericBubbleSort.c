#include "GenericBubbleSort.h"
#include "IntegerBubbleSort.h"

// void genericSingleBubbleSort(void *array,
							 // int size,
							 // int length,
							 // int (*compare)(void *v1, void *v2),
							 // int (*swap)(void *array, int index1, int index2))
// {
	// int *arrayInt = (int *)array;
	// int i, result;
	// int n = size-1;
	
	// for(i=length-1; n>0; i--)
	// {
		compare = integerCompare;
		swap = integerSwap;
		// int *arrayInt[i-1] = (int *)v1;
		// int *arrayInt[i] = (int *)v2;
		// result = compare(arrayInt[i-1], arrayInt[i]);
		// if(result == 1)
			// swap(arrayInt, i, i-1);
		// n--;
	// }
// }

// void genericBubbleSort(void *array, int length,
						// int (*compare)(void *v1, void *v2),
						// int (*swap)(void *array, void *index1, void *index2))
// {

// }