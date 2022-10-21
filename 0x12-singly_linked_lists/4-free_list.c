#include "lists.h"

/**
 * free_list - frees a link list
 * @head: the list to be freed
 *
 * Return: nothing
 */

void free_list(list_t *head)
{

	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp);
	}

	head = NULL;
}
