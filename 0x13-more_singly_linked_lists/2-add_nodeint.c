#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a list
 * @head: the node head
 * @n: the element to add in the beginning of the list
 *
 * Return: the address of the new element if successful else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **node_head;
	listint_t *new_node;

	node_head = head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*node_head == NULL)
		*node_head = new_node;
	else
	{
		new_node->next = *node_head;
		*node_head = new_node;
	}

	return (new_node);

}
