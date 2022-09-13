#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: character to be passed in to print_sign
*
* Return: returns 1 if positive
* return 0 if neutral
* return -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (-1);
	}
}
