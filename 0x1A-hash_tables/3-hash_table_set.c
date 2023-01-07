#include "hash_tables.h"

/**
 * hash_table_set - add/update an element of the hash table
 * @ht: the hash table
 * @key: the node key
 * @value: the node value
 *
 * Return: 1 if successfull else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	if (ht->array[index] == NULL)
	{ /* add new node */
		ht->array[index] = create_hash_node(key, value);
		return (1);
	}

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if ((strcmp((tmp->key), key)) == 0)
		{ /* update node */
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	/* collission occured  */
	tmp = ht->array[index];
	ht->array[index] = create_hash_node(key, value);
	ht->array[index]->next = tmp;

	return (1);
}

/**
 * create_hash_node - create a new hash node
 * @key: the node key
 * @value: the node value
 *
 * Return: address to the new node
*/

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_hash_node;

	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		exit(0);
	new_hash_node->key = malloc(strlen(key) + 1);
	if (new_hash_node->key == NULL)
		exit(0);
	new_hash_node->value = malloc(strlen(value) + 1);
	if (new_hash_node->value == NULL)
		exit(0);
	new_hash_node->next = NULL;

	strcpy(new_hash_node->key, key);
	strcpy(new_hash_node->value, value);

	return (new_hash_node);
}
