#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: the head of linked list
 *
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_head, *tmp;

	node_head = head;

	while (node_head != NULL)
	{
		tmp = node_head;
		node_head = node_head->next;
		free(tmp);
	}

}
