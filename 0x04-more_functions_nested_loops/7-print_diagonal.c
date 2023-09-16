#include "main.h"

/**
 * print_diagonal - prints a diagonal with bakslash
 *
 * @n: the size of the diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int m;
	int o;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
			for (o = 1; o <= m + 1; o++)
			{
				if (m == o)
					_putchar('\\');
				else if (o < m)
					_putchar(' ');
				else
					_putchar('\n');
			}
	}
}
