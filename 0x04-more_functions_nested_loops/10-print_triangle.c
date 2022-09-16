#include "main.h"

/**
* print_triangle -  prints a triangle
* @size: Size of triangle to be printed
* Return: void
*/

void print_triangle(int size)
{
	int i = 1, j, k, space;

	while (i <= size && size > 0)
	{
		space = size - i;
		j = 0;
		k = 0;

		while (j < space)
		{
			_putchar(' ');
			j++;
		}
		while (k < i)
		{
			_putchar('#');
			k++;
		}

			_putchar('\n');

			i++;
	}

		if (i == 1)
			_putchar('\n');
}
