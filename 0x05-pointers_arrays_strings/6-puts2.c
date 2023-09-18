#include "main.h"

/**
 * puts2 - printd the half of the input
 * @str: the parameter passed
 *
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;

	while (*str)
	{
		if (length % 2 == 0)
			_putchar(*str);
		length++;
		str++;
	}
	_putchar('\n');
}
