#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list.
 *
 * @head: the head pointer.
 * @n: the value to be added.
 *
 * Return: the location of the newy added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *iterator = NULL;


	if (head)
	{
		if (*head)
		{
			iterator = *head;
			while (iterator->next && *head)
				iterator = iterator->next;
		}
		temp = malloc(sizeof(dlistint_t));
		if (temp)
		{
			temp->prev = iterator;
			temp->next = NULL;
			temp->n = n;
			if (*head)
				iterator->next = temp;
			else
				*head = temp;
		}
	}

	return (temp);
}
