#include "lists.h"

/**
 * first - delete node in the beginnig of a list
 * @head: the head of the linked list
 *
 * Return: the address of the new node
 */

int first(listint_t **head)
{
	listint_t *tmp = *head;

	*head = (*head)->next;
	free(tmp);
	tmp = NULL;

	return (1);
}


/**
 * end - delete a node in the end of a list
 * @head: the head of the linked list
 *
 * Return: the address of the new node
 */

int end(listint_t **head)
{
	listint_t *node_head = *head;
	listint_t *tmp;

	while (node_head->next->next != NULL)
		node_head = node_head->next;

	tmp = node_head->next;
	free(tmp);
	node_head = NULL;

	return (1);
}



/**
 * at_index - delete a node at an index position
 * @head: the head of the linked list
 * @idx: the index to add the new node
 *
 * Return: the address of the new node
 */

int at_index(listint_t **head, unsigned int idx)
{
	unsigned int index_checker = 0;
	listint_t *list_head = *head;
	listint_t *tmp;

	while (list_head->next != NULL)
	{

		if (index_checker == idx - 1)
		{
			tmp = list_head->next;
			list_head->next =
			list_head->next->next;
			free(tmp);
			tmp = NULL;
			return (1);
		}

		list_head = list_head->next;
		index_checker++;
	}

	return (-1);
}

/**
 * delete_nodeint_at_index - delete a new node
 * at an index
 * @head: the head of the list
 * @index: the index to delete the new node
 *
 * Return: the address of the new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	if (index == 0)
		return (first(head));
	else if (index >= sizeof(head))
		return (end(head));
	else
		return (at_index(head, index));
}
