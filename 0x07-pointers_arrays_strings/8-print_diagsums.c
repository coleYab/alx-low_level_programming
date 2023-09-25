#include "main.h"

/**
 * print_diagsums - the function to print diagonal sum
 * @a: pointer to the multidimensional array
 * @size: the length of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, c, p, sum1 = 0;
	int sum2 = 0;

	for (b = 0; b < size; b++)
	{
		p = (b * size) + b;
		sum1 += *(a + p);
	}
	for (c = 0;c < size; c++)
	{
		p = (j * size) + (size - 1 - c);
		sum2 += *(a + p);
	}
	printf("%i, %i\n", sum1, sum2);
}
