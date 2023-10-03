#include "main.h"

/**
 * _strdup - is the function to do sth
 * @str: the string parameter passed
 * Return: the memory location of the new array
 */
char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *copy;

	for (i = 0; str[i]; i++)
		length++;
	length += 1;
	copy = malloc(sizeof(char) * length);


	if (str == NULL || !copy)
		return (NULL);
	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}
