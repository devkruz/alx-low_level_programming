#include "lists.h"

/**
 * first - add a node in the beginnig of a list
 * @head: the head of the linked list
 * @new: the new node
 *
 * Return: the address of the new node
 */

listint_t *first(listint_t **head,  listint_t *new)
{
	listint_t *node_head = *head;

	new->next = node_head;
	*head = new;

	return (new);
}


/**
 * end - add a node in the end of a list
 * @head: the head of the linked list
 * @new: the new node
 *
 * Return: the address of the new node
 */

listint_t *end(listint_t **head,  listint_t *new)
{
	listint_t *node_head = *head;

	while (node_head->next != NULL)
		node_head = node_head->next;

	node_head->next = new;

	return (new);
}



/**
 * at_index - add a node at an index position
 * @head: the head of the linked list
 * @new_node: the new node
 * @idx: the index to add the new node
 *
 * Return: the address of the new node
 */

listint_t *at_index(listint_t **head, unsigned int idx, listint_t *new_node)
{
	unsigned int index_checker = 0;
	listint_t *list_head = *head;

	while (list_head != NULL)
	{

		if (index_checker == idx - 1)
		{
			new_node->next = list_head->next;
			list_head->next = new_node;
			return (new_node);
		}

		list_head = list_head->next;
		index_checker++;
	}

	return (NULL);
}

/**
 * insert_nodeint_at_index - insert a new node
 * at an index
 * @head: the head of the list
 * @idx: the index to insert the new node
 * @n: the data to be inserted
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (first(head, new_node));
	else if (idx >= sizeof(head))
		return (end(head, new_node));
	else
		return (at_index(head, idx, new_node));

	return (NULL);
}
