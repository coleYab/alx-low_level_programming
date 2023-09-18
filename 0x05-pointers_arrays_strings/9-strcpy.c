#include "main.h"
/**
 * _strlen - finds and returns the length of a string
 * @s: string to be tested
 * Return: length of the given string
*/
int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 *_strcpy - copies a string
 * @dest: parameter two
 * @src: parameter one
 * Return: the dest adress
*/

char *_strcpy(char *dest, char *src)
{
	int j, length = _strlen(src);

	for (j = 0; j <= length; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
