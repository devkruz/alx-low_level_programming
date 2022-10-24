#include "lists.h"

/**
 * sum_listint - sum all the data of a linked list
 * @head: the head of the list
 *
 * Return: the sum of the data in linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
