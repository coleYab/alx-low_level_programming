#include "main.h"

/**
 * print_times_table - prints a random time taable
 *
 * @n: the number to print
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (a * b / 100 != 0)
					_putchar((a * b % 1000) / 100 + '0');
				else
					if (b != 0)
						_putchar(' ');
				if (a * b / 10 != 0)
					_putchar((a * b % 100) / 10 + '0');
				else
					if (b != 0)
						_putchar(' ');
				_putchar((a * b) % 10 + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
