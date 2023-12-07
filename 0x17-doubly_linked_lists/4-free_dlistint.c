#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list.
 *
 * @head: the head pointer to the list.
 *
 * Return: none always success.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iterator = NULL;

	if (head)
	{
		iterator = head;
		while (iterator)
		{
			if (iterator->next)
			{
				iterator = iterator->next;
				free(iterator->prev);
			}
			else
			{
				free(iterator);
				return;
			}
		}
	}
}
