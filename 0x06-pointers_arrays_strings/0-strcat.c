#include "main.h"

/**
 * _strcat -  concatinates two given string
 *
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int count = 0;

	while (*src)
	{
		src++;
		length++;
	}
	while (src[count] != '\0')
	{
		dest[length] = src[count++];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
