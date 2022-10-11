#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: The varible to be printed
*
* Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(*d).name != NULL ?
			printf("Name: %s\n", (*d).name) : printf("Name: (nil)\n");
		(*d).age > 0 ?
			printf("Age: %f\n", (*d).age) : printf("Age: (nil)\n");
		(*d).owner != NULL ?
			printf("Owner: %s\n", (*d).owner) : printf("Owner: (nil)\n");
	}
}
