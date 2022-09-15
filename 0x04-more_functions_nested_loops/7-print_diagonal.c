nclude "main.h"

/**
* print_diagonal - Print  diagonal lines with backslashes
* @n: Amount of \ to be printed
* Return: void
*/

void print_diagonal(int n)
{
	int i = 0, c;

	while (i < n && n > 0)
	{
		c = 0;
	while (c < i)
	{
		_putchar(' ');
		c++;
	}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
