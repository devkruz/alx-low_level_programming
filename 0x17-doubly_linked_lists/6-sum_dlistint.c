#include "lists.h"

/**
 * sum_dlistint - sum the elements in a linked list
 * @head: the head of the list
 *
 * Return: the sum of the elements
*/
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
