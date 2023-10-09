#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated for the dog
 * @d: pointer to the dog created at the heap
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
