#include "hash_tables.h"

/**
 * shash_table_create - create a new sorted hash table
 * @size: the size of the hash node array
 *
 * Return: the pointer to the new hash table else NULL
*/

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *shash_table;
    unsigned long int index;

    shash_table = malloc(sizeof(shash_node_t));
    if (shash_table == NULL)
        return (NULL);

    shash_table->shead = NULL;
    shash_table->stail = NULL;
    shash_table->size = size;
    shash_table->array = malloc(size * sizeof(shash_node_t));
    if (shash_table->array == NULL)
        return (NULL);

    for (index = 0; index < size; index++)
        shash_table->array[index] = NULL;

    return (shash_table);
}


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *tmp, *new_node;

    if (ht == NULL || key == NULL || value == NULL || *key == '\0')
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    new_node = create_shash_node(key, value);

    if (ht->array[index] == NULL)
	{   /* add new node */
		ht->array[index] = new_node;
	}
    else if (ht->array[index] != NULL)
    {
        tmp = ht->array[index];
	    while (tmp != NULL)
	    {
		    if ((strcmp((tmp->key), key)) == 0)
		    {   /* update node */
			    free(tmp->value);
			    tmp->value = strdup(value);
		    }
		    tmp = tmp->next;
	    }
    }
    else
    {   /* collission occured  */
	    tmp = ht->array[index];
	    ht->array[index] = new_node;
	    ht->array[index]->next = tmp;
    }

    if (ht->shead == NULL)
    {
        new_node->
    }

    return (1);
}


/**
 * create_hash_node - create a new hash node
 * @key: the node key
 * @value: the node value
 *
 * Return: address to the new node
*/

shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new_hash_node;

	new_hash_node = malloc(sizeof(shash_node_t));
	if (new_hash_node == NULL)
		exit(0);
	new_hash_node->key = malloc(strlen(key) + 1);
	if (new_hash_node->key == NULL)
	{
		free(new_hash_node);
		exit(0);
	}
	new_hash_node->value = malloc(strlen(value) + 1);
	if (new_hash_node->value == NULL)
	{
		free(new_hash_node->key);
		free(new_hash_node);
		exit(0);
	}
	new_hash_node->next = NULL;
    new_hash_node->snext = NULL;
    new_hash_node->sprev = NULL;

	strcpy(new_hash_node->key, key);
	strcpy(new_hash_node->value, value);

	return (new_hash_node);
}
