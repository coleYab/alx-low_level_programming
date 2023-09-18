#include "main.h"

/**
 * print_rev - prints the reeverse of any string input
 * @s: the parameter passed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int val;

	while (*s)
	{
		s++;
		length++;
	}
	for (val = length; val >= 0; val--)
		_putchar(*(--s));
	_putchar('\n');
}
