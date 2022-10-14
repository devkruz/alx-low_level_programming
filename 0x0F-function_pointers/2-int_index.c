
/**
* int_index - Check the index of the first element
* for which it callback function doesn't return 0
* @array: The array of int to be checked
* @size: The size of the array
* @cmp: The function to execute
*
* Return: Nothing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
