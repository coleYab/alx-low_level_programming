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
	for (c = 0; c < size; c++)
	{
		p = (b * size) + (size - 1 - c);
		sum2 += *(a + p);
	}
	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar('\n');
}

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
