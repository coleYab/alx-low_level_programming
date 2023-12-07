#include "lists.h"

/**
 * add_dnodeint - adds a node at the head.
 *
 * @head: the head pointer to the thing.
 * @n: the number to be added.
 *
 * Return: the address to the newly added node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp)
		{
			temp->prev = NULL;
			temp->next = *head;
			temp->n = n;
			if (*head)
				(*head)->prev = temp;
			(*head) = temp;
		}
	}

	return (temp);
}
