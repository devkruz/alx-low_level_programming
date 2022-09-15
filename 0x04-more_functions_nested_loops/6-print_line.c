#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: The length of line to be printed
* Return: Void
*/


void print_line(int n)
{
	int counter = 0;

	while (counter < n && n > 0)
	{
		_putchar(95);
		counter++;
	}
		_putchar('\n');
}
