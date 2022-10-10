#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The variable to be initialized
 * @name: The name of the initialized object
 * @age: The age of the initialized object
 * @owner: The owner of the initialized object
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
