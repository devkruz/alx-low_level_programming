#include "hash_tables.h"

/**
 * hash_table_get - get the value for a hash key
 * @ht: the hash table
 * @key: the node key
 *
 * Return: the value for the hash key else NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	if (index >= size)
		return (NULL);

	node = ht->array[index];
	while (node && (strcmp(key, node->key)) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
