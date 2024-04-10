#include "search_algos.h"

/**
 * linear_search - function to implement linear search.
 * @array: the array to be searched.
 * @size: the size of arr
 * @value: the value to be search.
 * Return: the index or -1.
*/
int linear_search(int *array, size_t size, int value)
{
	int idx;

	for (idx = 0; array && idx < (int)size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
