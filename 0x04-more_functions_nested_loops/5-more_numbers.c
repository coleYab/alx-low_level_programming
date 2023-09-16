#include "main.h"

/**
 * more_numbers - prints a square of numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 1; num1 <= 14; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 / 10)
				_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
		}
		_putchar('\n');
	}
}
