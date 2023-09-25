#include "main.h"

/**
 * _strspn - this is a function that do some task
 *
 * @s: the first parameter
 *
 * @accept: it is the other parameter
 *
 * Return: the total number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int number = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					number++;
			}
		}
		else
			return (number);
	}
		return (number);
}
