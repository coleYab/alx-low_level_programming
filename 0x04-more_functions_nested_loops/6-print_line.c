#include "main.h"

/**
 * print_line - pritns a line by _
 *
 * @n: the number of hashes
 *
 * Return: void
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 1; m <= n; m++)
			_putchar('_');
		_putchar('\n');
	}
}
