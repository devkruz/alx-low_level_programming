#include "lists.h"

/**
 * print_list - prints all the elements of @h list
 * @h: list which member is to be printed
 *
 * Return: the number of nodes in @h list
 */

size_t print_list(const list_t *h)
{
	size_t h_len;
	const list_t *h_ptr;

	h_len = 0;
	h_ptr = h;

	while (h_ptr != NULL)
	{
		if (h_ptr->str == NULL)
			printf("[%d] %s\n", h_ptr->len, "(nil)");
		else
			printf("[%d] %s\n", h_ptr->len, h_ptr->str);

		h_ptr = h_ptr->next;
		h_len++;
	}

	return (h_len);
}

