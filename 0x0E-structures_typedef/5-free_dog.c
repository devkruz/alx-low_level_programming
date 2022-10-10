#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs variable
 * @d: The variable to be freed
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
