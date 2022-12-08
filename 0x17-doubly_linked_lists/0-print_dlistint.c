#include "lists.h"

/**
 * print_dlistint - print the elements
 * of a link list
 * @h: the node head
 *
 * Return: the length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t total;

	total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}

	return (total);
}
