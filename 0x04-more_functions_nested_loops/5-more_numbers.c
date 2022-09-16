#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 t14
*
* Return: Returns void
*/


void more_numbers(void)
{
	int i = 0, n, l;

	while (i < 10)
	{
	for (n = 0; n <= 14; n++)
	{
		l = n;
		if (n > 9)
		{
			_putchar('1');
			l = n % 10;
		}
		_putchar('0' + l);
	}

		_putchar('\n');
			i++;
	}
}
