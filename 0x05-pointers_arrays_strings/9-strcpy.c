#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: initial file
 * Return: 0 in copmilation
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
