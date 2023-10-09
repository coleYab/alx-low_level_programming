#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - it adopts a new dog for the owner
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the name of the owner dog
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(i * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doge->name[k] = name[k];
	doge->age = age;
	doge->owner = malloc(j * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doge->owner[k] = owner[k];
	return (doge);
}
