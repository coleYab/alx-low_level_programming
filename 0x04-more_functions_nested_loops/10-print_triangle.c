#include "main.h"

/**
 * print_triangle - prints the triangle with meselal
 * @size: the size to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int m;
	int o;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (o = 1; o <= m; o++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
