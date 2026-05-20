#include <stdio.h>
#include <alloc.h>

#include "test.h"


int *create_array(int len)
{
	int *ar = malloc(len*sizeof(int));

	if(ar == NULL)
	{
		printf("Error array not created\n");
		return NULL;
	}
	else
		return ar;
}


void select_algo(int choice)
{
	int *ar;
	int n = 10;
	
	ar = create_array(n);

	if(ar == NULL)
	{
		printf("\nGot Empty Array! Not calling sorting algos\n");
		return;
	}

	switch(choice)
	{
		case 1:
			bubbleSort(ar, n);
			break;

		case 2:
			quickSort(ar, 0,  n);
			break;

		case 3:
			heapSort(ar, n);
			break;

		case 4:
			mergeSort(ar, 0, n);
			break;

		default:
			printf("Error, wrong selection\n");
			break;
	}
}
