#include "main.h"

/**
 * times_table - prints the time table
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a * b / 10 != 0)
				_putchar((a * b) / 10 + '0');
			else
				if (b != 0)
					_putchar(' ');
			_putchar((a * b) % 10 + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
