#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * at an index
 * @head: the head of the list
 * @idx: the index to insert the new node
 * @n: the data to be inserted
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list_head;
	unsigned int index_checker;
	listint_t *new_node;

	list_head = *head;
	index_checker = 0;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

		while (list_head != NULL)
		{
			if (index_checker == idx - 1)
			{
				new_node->next = list_head->next;
				list_head->next = new_node;
				break;
			}

			list_head = list_head->next;
			index_checker++;
		}
		if (list_head == NULL)
			return (NULL);


	return (new_node);


}
