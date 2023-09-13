#include "main.h"

/**
 * _islower - checks if the intered alphabet is in lower case
 *
 * @c: the variable to be checked
 *
 * Return: 1 - if it is lower 0 - if it is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
