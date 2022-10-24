#include "lists.h"

/**
 * get_nodeint_at_index - check for the nth node
 * of a linked list
 * @head: the head of the link list
 * @index: node index
 *
 * Return: the node at nth index else NULL if the
 * node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_tracker;

	index_tracker = 0;

	while (head != NULL)
	{
		if (index_tracker == index)
			return (head);
		head = head->next;
		index_tracker++;
	}

	return (NULL);
}
