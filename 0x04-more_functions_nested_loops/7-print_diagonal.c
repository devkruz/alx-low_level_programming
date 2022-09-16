#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: The amount of diagonal to be printed
* Return: void
*/


void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
	for (j = 0; j < i; j++)
	{
		_putchar (' ');
	}
		_putchar ('\\');
		_putchar ('\n');
		i++;
	}
	if (i == 0)
		_putchar ('\n');
}

