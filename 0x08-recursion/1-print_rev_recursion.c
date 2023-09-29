#include "main.h"

/**
 * print_rev_recursion - print the reverse of a string by recursion
 *
 * @s: teh string parameter
 *
 * Return: void
 */
void print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
