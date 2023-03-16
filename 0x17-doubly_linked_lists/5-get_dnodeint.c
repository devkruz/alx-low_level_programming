#include "lists.h"


/**
 * get_dnodeint_at_index - get the node at @index
 * @head: the head of the node list
 * @index: the index of the node to get
 *
 * Return: the node at @index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t * current = head;
    unsigned int current_index = 0;

    if (current == NULL)
        return (NULL);

    while (current != NULL)
    {
        if (current_index == index)
            return (current);

        current_index++;
        current = current->next;
    };

    return (NULL);
}
