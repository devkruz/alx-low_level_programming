#include "main.h"

/**
* print_square -  prints @size amonunt of square
* @size: Amount of square to be printed
* Return: void
*/


void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		for (j = 0; j < size; j++)
		{
			_putchar ('#');
		}
			_putchar ('\n');
			i++;
	}
		if (i == 0)
			_putchar ('\n');
}


