#include "main.h"

/**
 * _isdigit - checks if the variable is digit
 *
 * @c: the variable to be checked
 *
 * Return: 0 - if c isnot digit else 1
 */
int _isdigit(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
