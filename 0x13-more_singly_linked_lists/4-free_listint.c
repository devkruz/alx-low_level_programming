#include "lists.h"

/**
 * free_listint - frees a link list
 * @head: the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *list_head;
	listint_t *temp;

	list_head = head;

	while (list_head != NULL)
	{
		temp = list_head;
		list_head = list_head->next;
		free(temp);
		temp = NULL;
	}

}
