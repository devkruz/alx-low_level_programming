#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: address to the hash table
 *
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
