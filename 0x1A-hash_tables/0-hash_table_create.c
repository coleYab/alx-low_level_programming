#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table of a specified size.
 *
 * @size: is the size of hte hash table.
 *
 * Return: the pointer to a hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp = malloc(sizeof(hash_table_t));

	if (temp)
	{
		temp -> size = size;
		temp -> array = malloc(sizeof(hash_node_t *) * size);
		if (!temp -> array)
			return (NULL);
	}

	return (temp);
}

