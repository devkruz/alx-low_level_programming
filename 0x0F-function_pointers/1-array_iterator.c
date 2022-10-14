#include <stdio.h>
/**
* array_iterator - executes a function given as
* a parameter on each element of an array
* @array: The array to be executed
* @size: The size of the array
* @action: The function to execute
*
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
