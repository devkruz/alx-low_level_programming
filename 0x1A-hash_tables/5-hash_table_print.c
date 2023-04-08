#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, size;
	hash_node_t *node;
	int status;

	if (ht == NULL)
		return;

	status = 0;
	size = ht->size;
	printf("{");
	for (index = 0; index < size; index++)
	{
		node = ht->array[index];
		if (node)
			if (status)
				printf(", ");
		while (node != NULL)
		{
			status = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
	}
		printf("}\n");
}
