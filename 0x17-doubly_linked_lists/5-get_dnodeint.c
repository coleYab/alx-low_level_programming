#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index index.
 *
 * @head: the head pointer of the list.
 * @index: the index to be inserted.
 *
 * Return: the loction of the newly allocated node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int size = 0;
	dlistint_t *temp = NULL, *node = NULL;

	if (head)
	{
		temp = head;
		while (size != (int)index && temp)
		{
			temp = temp->next;
			size++;
		}
		if (temp)
		{
			node = temp;
		}
	}

	return (node);
}
