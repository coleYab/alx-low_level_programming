#include "main.h"

/**
  * print_number - print any integer
  * @n: parameter one
  *
  * Return: void
  */
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	number = n;
	if (number / 10)
		print_number(number / 10);
	_putchar(number % 10 + '0');
}
