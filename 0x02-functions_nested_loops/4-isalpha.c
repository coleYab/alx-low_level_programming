#include "main.h"

/**
 * _isalpha - Checks if the char given is alphabet
 *
 * @c: the charcter to be checked
 *
 * Return: 1- if c is alpha, 0 - if it is not
 */
int _isalpha(int c)
{
	if ((c >=  98 && c <= 122) || (c >= 65 && c <= 91))
		return (1);
	else
		return (0);
}
