#include "main.h"

/**
 * _isupper - checks for uppercase letter
 *
 * @c: the char to be checked
 *
 * Return: 1 - if it is upper case else return - 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
