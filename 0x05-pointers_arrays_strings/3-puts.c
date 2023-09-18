#include "main.h"

/**
 * _puts - puts string to the std output
 * @str: the parametr of our function
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
