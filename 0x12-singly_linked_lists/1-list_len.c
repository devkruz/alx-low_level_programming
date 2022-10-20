#include "lists.h"

/**
 * list_len - calculate the number of elements
 * in a linked list
 * @h: list which member is to be counted
 *
 * Return: amount of member in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t h_len;
	const list_t *h_ptr;

	h_len = 0;
	h_ptr = h;

	while (h_ptr != NULL)
	{
		h_ptr = h_ptr->next;
		h_len++;
	}

	return (h_len);
}

