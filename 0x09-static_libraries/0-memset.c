#include "main.h"

/**
 * _memset - the function that fills the n bytes
 *
 * @n: the total bytes
 *
 * @s: the parameter one
 *
 * @b: the parameter two
 *
 * Return: the memory location of the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
		s[index++] = b;

	return (s);
}
