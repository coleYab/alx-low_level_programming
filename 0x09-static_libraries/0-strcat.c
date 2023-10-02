#include "main.h"

/**
 * _strcat -  concatinates two given string
 *
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: pointer destnation
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
