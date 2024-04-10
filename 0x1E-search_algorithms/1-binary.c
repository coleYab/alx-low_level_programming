#include "search_algos.h"

/**
 * binary_search - implements a binary search function.
 *
 * @array: the array to be searched.
 * @size: the size of the things.
 * @value: the thing to be searched.
 *
 * Return: the index of value or -1.
*/
int binary_search(int *array, size_t size, int value)
{
	int mid, left = 0, right = (int)size - 1;

	while (left <= right && array)
	{
		mid = (left + right) / 2;
		printf("Search in array: ");
		print(array, left, right);
		if (array[mid] == value)
			return mid;
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}

/**
 * print - prints an array.
 *
 * @array: the array to thing of it.
 * @left: the left ptr.
 * @right: the right ptr.
 *
*/
void print(int *array, int left, int right)
{
	int idx;

	if (array)
	{
		for (idx = left; idx <= right; idx++)
		{
			if (idx != right)
				printf("%d, ", array[idx]);
			else
				printf("%d\n", array[idx]);
		}
	}
}
