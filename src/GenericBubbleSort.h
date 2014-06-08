#ifndef GenericBubbleSort_H
#define GenericBubbleSort_H

void genericSingleBubbleSort(void *array,
							 int size,
							 int length,
							 int (*compare)(void *v1, void *v2),
							 int (*swap)(void *array, void *index1, void *index2));
							
void genericBubbleSort(void *array, int length,
						int (*compare)(void *v1, void *v2),
						int (*swap)(void *array, void *index1, void *index2));
						
#endif // GenericBubbleSort_H
