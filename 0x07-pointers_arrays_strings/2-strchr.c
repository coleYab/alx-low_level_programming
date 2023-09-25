#include "main.h"

/**
 * _strchr - this is the function that locates one to other
 *
 * @c: parameter one passed
 *
 * @s: the second parameter
 *
 * Return: the memory location of the string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
