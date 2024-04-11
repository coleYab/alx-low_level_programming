#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - best searching alghorithm after binary search.
 *
 * @array: the array given to search.
 * @size: the size of the array.
 * @value: the value to be searched.
 *
 * Return: the index of value or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, diff, j;

	diff = (int)sqrt(size);
	if (!diff || !array)
		return (-1);

	for (idx = 0; idx < (int)size && array[idx] < value; idx += diff)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
	}

	printf("Value found between indexes [%d] and [%d]\n", idx - diff, idx);

	for (j = idx - diff; j <= idx && j < (int)size; j++)
	{
		if (array[j] == value)
			return (j);
	
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
	}
	return (-1);
}

