#include "lists.h"

/**
 * add_dnodeint - add a new node to the
 * beging of a linked list
 * @head: the linked list head
 * @n: the new node element
 *
 * Return: the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *node_head = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = node_head;
	if (node_head != NULL)
		node_head->prev = new_node;
	*head = new_node;

	return (new_node);
}
