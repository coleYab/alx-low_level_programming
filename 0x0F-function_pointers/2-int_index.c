#include "function_pointers.h"

/**
 * int_index - returns the index of numbers
 *
 * @array: the array to  be checked
 * @size: the size of integer array
 * @cmp: the function that compares the string
 *
 * Return: the length of the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
