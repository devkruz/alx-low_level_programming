#include "main.h"

/**
 * set_bit - sets a bit at index position
 * @n: the number to set it bit
 * @index: the bit index to set
 *
 * Return: 1 if successful else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long
	int mask = 1 << index;

	*n = *n | mask;

	return (1);
}
