#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: the head of the list
 *
 * Return: the data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *node_head;
	int rm_data;

	node_head = *head;

	if (node_head == NULL)
		return (0);

	rm_data = node_head->n;
	*head = (*head)->next;
	free(node_head);
	node_head = NULL;

	return (rm_data);
}
