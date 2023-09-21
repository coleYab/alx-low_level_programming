
#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *s = str;
	char c;

	while (*s)
	{
		c = *s;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if ((c >= 'a' && c <= 'z'))
			{
				if (c + 13 <= 'z')
					*s = c + 13;
				else
					*s = c - 13;
			}
			else
			{
				if (c + 13 <= 'Z')
					*s = c + 13;
				else
					*s = c - 13;
			}
		}

		s++;
	}

	return (str);
}
