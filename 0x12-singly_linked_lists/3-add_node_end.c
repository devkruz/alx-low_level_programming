#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of link list
 * @head: the pointer to the list
 * @str: the name of a new node
 *
 * Return: the pointer of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *node_str;
	list_t *new_node;
	unsigned int len;
	list_t *node_h;

	node_h = *head;
	node_str = strdup(str);
	len = strlen(node_str);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = node_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{

		while (node_h->next != NULL)
		{
			node_h = node_h->next;
		}

			node_h->next = new_node;
	}

	return (new_node);
}
