#include "lists.h"

/**
 * dlistint_len - get the length of
 * a linked list
 * @h: the link head
 *
 * Return: the length of a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t total;

	total = 0;

	while (h != NULL)
	{
		h = h->next;
		total++;
	}

	return (total);
}
