#include "main.h"

/**
 * print_square - prints a square
 * @size: the length and width of the sqare
 *
 * Return: void
 */
void print_square(int size)
{
	int m;
	int n;

	for (m = 1; m <= size; m++)
	{
		for (n = 0; n <= size; n++)
		{
			if (n < size)
				_putchar(35);
			else
				_putchar('\n');
		}
	}
}
