#include "main.h"

/**
* print_number - prints an integer
* @n: The integer to be printed
* Description: Will print any long integer passed to it
* Return: void
*/

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}