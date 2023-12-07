#include "lists.h"

/**
 * sum_dlistint - adds all the member of the linked lists.
 *
 * @head: the head of the pointer.
 *
 * Return: the sum of all the nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}
