#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes
* it with a specific char.
* @size: The size of the array to be created
* @c: The character to be contained in the array
*
* Return: A pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *prt;
	unsigned int i = 0;

	if (size < 1)
	{
		return (NULL);
	}

	prt = (char *)malloc(size * sizeof(char));

	if (!prt)
	{
		return (NULL);
	}

	while (i < size)
	{
	prt[i] = c;
	i++;
	}

	return (prt);
}
