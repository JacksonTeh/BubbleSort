#include <string.h>
#include <stdio.h>
#include "CharaterBubbleSort.h"

int charCompare(void *v1, void *v2)
{
	char *value1 = (char *)v1;
	char *value2 = (char *)v2;
	
	if(strcmp(value1, value2) == 1)
		return 1;
	else if(strcmp(value1, value2) == 0)
		return 0;
	else
		return -1;
}

void charSwap(void *array, int index1, int index2)
{
	char *valArray = (char *)array;
	char temp;
	
	temp = valArray[index1];
	valArray[index1] = valArray[index2];
	valArray[index2] = temp;
}