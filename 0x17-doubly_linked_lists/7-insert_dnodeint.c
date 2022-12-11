#include "lists.h"

/**
 * insert_dnodeint_at_index - add a new
 * node at a position
 * @h: the node head
 * @idx: the new node positon
 * @n: the element of the new node
 *
 * Return: the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *node_head = *h, *new_node, *tmp;

	while (node_head != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (index == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			tmp = node_head->prev;
			node_head->prev = new_node;
			new_node->prev = tmp;
			new_node->next = node_head;
			tmp->next = new_node;
			return (new_node);
		}
		index++;
		node_head = node_head->next;
	}

	return (NULL);
}
