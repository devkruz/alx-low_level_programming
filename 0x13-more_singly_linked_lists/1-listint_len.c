#include "lists.h"

/**
 * listint_len - count the number of element in a list
 * @h: the head of the list
 *
 * Return: amount of element in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *list_head;
	size_t node_count;

	list_head = h;
	node_count = 0;

	while (list_head != NULL)
	{
		list_head = list_head->next;
		node_count++;
	}

	return (node_count);
}
