#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the
 * end of a linked list
 * @head: the node head
 * @n: the element of the new node
 *
 * Return: the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_head;
	dlistint_t *new_node;

	node_head = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (node_head == NULL)
		*head = new_node;
	else
	{
		while (node_head->next != NULL)
			node_head = node_head->next;
		node_head->next = new_node;
		new_node->prev = node_head;
	}

	return (new_node);
}
