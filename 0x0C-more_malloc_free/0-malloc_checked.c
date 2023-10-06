#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: the bytes to be allocated
 * Return: the location to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *location;

	location = malloc(b);
	
	if (location == NULL)
		exit(98);

	return (location);
}
