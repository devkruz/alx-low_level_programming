#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of the list
 * @head: the head of the list
 * @n: the element to be added in the end of the list
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *head_node = *head;

		while (head_node->next != NULL)
			head_node = head_node->next;

		head_node->next = new_node;
	}

	return (new_node);
}
