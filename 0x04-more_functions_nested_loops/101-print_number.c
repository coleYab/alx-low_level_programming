#include "main.h"

/**
 * print_number - prints any integer
 *
 * @n: the number
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < o)
	{
		_putchar('-');
		num *= -1;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
