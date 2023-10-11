#include "function_pointers.h"

/**
 * array_iterator - iterates through array to do sth.
 *
 * @array: the memory location of array passed
 * @size: is the size of the array.
 * @action: a pointer to the function.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
