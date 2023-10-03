#include "main.h"

/**
 * create_array - is the function to create array
 * @size: the size of array
 * @c: the char to allocate
 *
 * Return: the adress of array allocaated
 */
char *create_array(unsigned int size, char c)
{
	int len = size, i;
	char *array;

	if (!size)
		return (0);

	array = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < len; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';

	return (array);
}
