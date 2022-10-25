#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at position
 * of index
 * @head: the head of the list
 * @index: the index to be deleted
 *
 * Return: 1 if successful else -1
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index_checker;
	listint_t *list_head;
	listint_t *tmp;

	index_checker = 0;
	list_head = *head;

	if (index == 0)
	{
		tmp = (*head)->next;
		*head = (*head)->next;
		free(tmp);
	}
	while (list_head != NULL && index >= 1)
	{
		if (index_checker == index - 1)
		{
			tmp = list_head->next;
			list_head->next =
			list_head->next->next;
			free(tmp);
			return (1);
		}

		list_head = list_head->next;
		index_checker++;
	}

	return (-1);
}
