#include "lists.h"

/**
 * dlistint_len - the length counter function.
 *
 * @h: the head of the doubly linked list.
 *
 * Return: the length of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *head;

	if (h)
	{
		size++;
		head = h->next;
		while (head)
		{
			size++;
			head = head->next;
		}
	}

	return (size);
}
