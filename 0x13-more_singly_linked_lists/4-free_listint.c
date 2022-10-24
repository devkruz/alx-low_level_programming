#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *list_head;
	listint_t *temp;

	list_head = head;

	while (list_head != NULL && list_head->next != NULL)
	{
		temp = list_head;
		list_head = list_head->next;
		free(temp);
		temp = NULL;
	}
	
	if (list_head != NULL)
	{
		free(list_head);
		list_head = NULL;
	}


}
