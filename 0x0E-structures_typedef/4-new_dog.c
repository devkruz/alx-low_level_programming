#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 *
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *new_dog_ptr;
	char *name_ptr;
	char *owner_ptr;
	int i;

	name_ptr = malloc(sizeof(name));
	owner_ptr = malloc(sizeof(owner));

	if (!name_ptr || !owner_ptr)
		return (NULL);

	for (i = 0; name[i]; i++)
		name_ptr[i] = name[i];

	for (i = 0; owner[i]; i++)
		owner_ptr[i] = owner[i];

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;

	new_dog_ptr = &new_dog;

	return (new_dog_ptr);
}
