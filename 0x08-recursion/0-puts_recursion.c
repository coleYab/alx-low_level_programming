#include "main.h"

/**
 * _puts_recursion - it is the function  print string
 *
 * @s: the string parameter
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
