#include "main.h"

/**
 * swap_int - swapps two integers from user
 *
 * @a: parameter one
 * @b: parameter two
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
