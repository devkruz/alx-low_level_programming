#include "hash_tables.h"

/**
 * key_index - creat a index from hash key
 * @key: the hash key
 * @size: the hash table size
 *
 * Return: the hash key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
