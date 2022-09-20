#include <stdio.h>

/**
* print_array - Prints n elements of an
* array of integers
* @a: The array to be printed
* @n: The length of th array to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
		printf("\n");
}
