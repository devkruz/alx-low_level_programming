#include "lists.h"

/**
 * free_listint2 - frees a link list
 * @head: the head of the link list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *link_head;
	listint_t *temp;

	link_head = *head;

	while (link_head != NULL)
	{
		temp = link_head;
		link_head = link_head->next;
		free(temp);
		temp = NULL;
	}

	*head = NULL;
}
