#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc
* @b: The amount of memory to be allocated
*
* Return: nothing
*/


void *malloc_checked(unsigned int b)
{
	void *b_space;

	b_space = malloc(b);

	if (!b_space)
		exit (98);

	return (b_space);
}
