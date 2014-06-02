#include "BubbleSort.h"

void bubbleSort(int array[], int length)
{
	int i;
	
	for(i=length; i>0; i--)
	{
		singleBubbleSort(array, i, length);
	}
}

void singleBubbleSort(int array[], int size, int length)
{
	int i;
	int n = size-1;
	for(i=length-1; n>0; i--)
	{
		if(array[i] < array[i-1])
			swap(array, i, i-1);
		n--;
	}
}

void swap(int array[], int index1, int index2)
{
	int temp;
	
	temp = array[index1];
	array[index1] = array[index2];
	array[index2] = temp;	
}