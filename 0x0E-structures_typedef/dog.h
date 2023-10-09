#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog  - the struct to store data of dog
 * @name: the name of the dog
 * @age: the variable to store the age of dog
 * @owner: the variable to store the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
