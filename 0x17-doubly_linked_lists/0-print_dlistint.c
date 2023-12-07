#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 *
 * @h: the head pointer to the list.
 *
 * Return: the size of the printed elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *head = NULL;

	if (h)
	{
		head = h->next;
		printf("%d\n", h->n);
		size++;
		while (head)
		{
			printf("%d\n", head->n);
			head = head->next;
			size++;
		}
	}

	return (size);
}
