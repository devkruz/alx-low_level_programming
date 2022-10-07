#include <stdlib.h>

/**
* array_range - Creates an array of integers ordered
* from min to max, inclusive
* @min: The first value of the array
* @max: The last value of the array
*
* Return: NULL if  min > max or the function fails else
* the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *arr_ptr, i = 0;
	int amount = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr_ptr = malloc(sizeof(int) * amount);

	if (!arr_ptr)
		return (NULL);

	while (min <= max)
	{
		arr_ptr[i] = min;
		min++, i++;
	}

	return (arr_ptr);
}
