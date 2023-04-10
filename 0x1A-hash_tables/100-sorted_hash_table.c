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

/**
 * shash_table_set - add/update an element of the hash table
 * @ht: the hash table
 * @key: the node key
 * @value: the node value
 *
 * Return: 1 if successfull else 0
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *tmp, *new_node;

    if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

    index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
    new_node = create_shash_node(key, value);

    if (ht->array[index] == NULL)
	{   /* index empty | add new node */
		ht->array[index] = new_node;
	}
    else
    {	/* index not empty */
		tmp = ht->array[index];
	    while (tmp != NULL)
	    {
		    if ((strcmp((tmp->key), key)) == 0)
		    {   /* update node in index*/
			    free(tmp->value);
			    tmp->value = strdup(value);
				break;
		    }
		    tmp = tmp->next;
	    }
		if (tmp == NULL)
		{   /* collission occured  */
			tmp = ht->array[index];
			ht->array[index] = new_node;
			ht->array[index]->next = tmp;
		}
    }
    if (ht->shead == NULL)
    {
		new_node->snext = ht->shead;
		ht->shead = new_node;
		ht->stail = new_node;
    }
	else
	{
		if ((strcmp(ht->shead->key, new_node->key)) > 0)
		{
			new_node->sprev = NULL;
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			tmp = ht->shead;
			while (tmp->snext != NULL && (strcmp(tmp->key, new_node->key)) < 0)
				tmp = tmp->snext;

			if (tmp->snext == NULL)
			{
				new_node->sprev = tmp;
				tmp->snext = new_node;
				ht->stail = new_node;
			}
			else
			{
				new_node->snext = tmp;
				new_node->sprev = tmp->sprev;
				tmp->sprev->snext = new_node;
				tmp->sprev = new_node;
			}

		}

	}

    return (1);
}


/**
 * create_shash_node - create a new hash node
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


/**
 * shash_table_get - get the value of a hash key
 * @ht: the hash table
 * @key: the node key
 *
 * Return: the value of the hash key else NULL
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node && (strcmp(key, node->key)) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);

}

/**
 * shash_table_print - print a sorted hash table
 * @ht: the hash table
 *
 * Return: nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *shasht = ht->shead;

	if (ht == NULL || shasht == NULL)
		return;
	printf("{");
	while (shasht != NULL)
	{
			printf("'%s': '%s'", shasht->key, shasht->value);
			shasht = shasht->snext;
			if (shasht != NULL)
				printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse
 * @ht: the hash table
 *
 * Return: nothing
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *shasht = ht->stail;

	if (ht == NULL || shasht == NULL)
		return;
	printf("{");
	while (shasht != NULL)
	{
			printf("'%s': '%s'", shasht->key, shasht->value);
			shasht = shasht->sprev;
			if (shasht != NULL)
				printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_deletee - deletes the sorted hash table
 * @ht: address to the hash table
 *
 * Return: nothing
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *node, *tmp;

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
