#include "main.h"

/**
 * _strlen_recursion - it finds teh string length
 *
 * @s: the string parameter
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
