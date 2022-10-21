#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer ot the list
 * @str: then name of the new list
 *
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *node_str;
	list_t **node_h;
	list_t *new_node;
	unsigned int len;

	node_str = strdup(str);
	node_h = head;
	len = strlen(node_str);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = node_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*node_h == NULL)
	{
		*node_h = new_node;
	}
	else
	{
		new_node->next = *node_h;
		*node_h = new_node;
	}

	return (new_node);
}
