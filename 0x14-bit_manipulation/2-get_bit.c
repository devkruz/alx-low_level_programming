#include "main.h"


/**
 * get-bit - get the value of a given bit
 * at a given index
 * @n: the value to check
 * @index: the index to be checked
 *
 * Return: the value at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val = n;
	unsigned int pos = index;
	int mask = 1 << pos;
	int isSet = (val & mask) > 0;

	return (isSet);

}
