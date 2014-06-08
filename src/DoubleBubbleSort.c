#include "DoubleBubbleSort.h"


int doubleCompare(void *v1, void *v2)
{
	double *value1 = (double *)v1;
	double *value2 = (double *)v2;
	
	if(*value1 > *value2)
		return 1;
	else if(*value1 == *value2)
		return 0;
	else
		return -1;
}

void doubleSwap(void *array, int index1, int index2)
{
	double *valArray = (double *)array;
	double temp;
	
	temp = valArray[index1];
	valArray[index1] = valArray[index2];
	valArray[index2] = temp;
}