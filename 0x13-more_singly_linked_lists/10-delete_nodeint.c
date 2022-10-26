#include "lists.h"

/**
 * first - delete node in the beginnig of a list
 * @head: the head of the linked list
 *
 * Return: the address of the new node
 */

int first(listint_t **head)
{
	listint_t *tmp = *head;

	*head = (*head)->next;/* set head to the next noed  */
	free(tmp);/* free the the node head formaly point to  */
	tmp = NULL;

	return (1);
}


/**
 * end - delete a node in the end of a list
 * @head: the head of the linked list
 *
 * Return: the address of the new node
 */

int end(listint_t **head)
{
	if ((*head)->next == NULL)/* check if  h_node point to NULL */
	{
		free(*head);/* free what h_node point to*/
		*head = NULL;
		return (1);
	}
	else
	{
		listint_t *tmp = *head;  /* set what h_node point to to tmp */

		while (tmp->next->next != NULL)/**
						 * check if what tmp
						 * point to point to NULL
						 */
		{
			tmp  = tmp->next;/* set tmp to the next node */
		}
		free(tmp->next);/* free the node that point to NULL */
		tmp->next = NULL;
		return (1);

	}


	return (-1);
}



/**
 * at_index - delete a node at an index position
 * @head: the head of the linked list
 * @idx: the index to add the new node
 *
 * Return: the address of the new node
 */

int at_index(listint_t **head, unsigned int idx)
{
	unsigned int index_checker = 0;
	listint_t *list_head = *head;
	listint_t *tmp;

	while (list_head->next != NULL)
	{

		if (index_checker == idx - 1)
		{
			tmp = list_head->next;/* set tmp to what we want to delete */
			list_head->next =
			list_head->next->next;/**
						* set the current list_head
						* to jump the node to be deleted
						*/
			free(tmp);/* free the node to be deleted */
			tmp = NULL;
			return (1);
		}

		list_head = list_head->next;/* set list_head to the next node */
		index_checker++;/* keep track of the index for each loop */
	}

	return (-1);
}

/**
 * delete_nodeint_at_index - delete a new node
 * at an index
 * @head: the head of the list
 * @index: the index to delete the new node
 *
 * Return: the address of the new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *node_count = *head;

	if (*head == NULL) /* check if head point to NULL */
		return (-1);

	while (node_count != NULL)
	{
		node_count = node_count->next;
		len++; /* keep track of each node */
	}

	if (index == 0) /* call first() if index is 0 */
		return (first(head));
	else if (index >= len - 1) /* call last() if index is >= the length of list */
		return (end(head));
	else
		return (at_index(head, index));
}
