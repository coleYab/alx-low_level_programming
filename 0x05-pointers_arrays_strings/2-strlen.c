#include "main.h"

/**
 * _strlen - it is the copied version of of strlen
 *
 * @s: the string input
 *
 * Return: the srring length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}

	return (length);
}
