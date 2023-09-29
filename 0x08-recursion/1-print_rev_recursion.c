#include "main.h"

/**
 * _print_rev_recursion - print the reverse of a string by recursion
 *
 * @s: teh string parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
