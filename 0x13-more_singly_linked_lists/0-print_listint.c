#include "lists.h"
/** print_listint - print the element of a list
 * @h: the head of the list
 *
 * Return: amount of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *list_head;
	size_t node_count;

	list_head = h;
	node_count = 0;

	while (list_head != NULL)
	{
		printf("%d\n", list_head->n);
		list_head = list_head->next;
		node_count++;
	}

	return (node_count);
}
