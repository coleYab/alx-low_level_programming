#include "main.h"

/**
 * _memcpy - function copies  n bytes from the memory
 *
 * @n: the parameter one
 *
 * @src: the parameter two
 *
 * @dest: the parameter three
 *
 * Return: the memory location of the file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
