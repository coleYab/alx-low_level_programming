#include "main.h"

/**
 * puts_half - second 45 begins
 *
 * @str: parameter given
 *
 * Return: void
 */
void puts_half(char *str)
{
	char *y = str;
	int length = 0;
	int half;

	while (*y)
	{
		y++;
		length++;
	}
	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;
	str = str + half;
	while (*str)
		_putchar(*(str++));
	_putchar('\n');
}
