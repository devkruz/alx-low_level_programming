#include "main.h"

/**
 * clear_bit - clears a bit at index position
 * @n: the number to clear it bit
 * @index: the index of the bit to clear
 *
 * Return: 1 if successful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	mask = ~mask;

	*n = *n & mask;

	return (1);
}
