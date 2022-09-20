#include "main.h"
#include <string.h>

/**
* puts_half - Prints half of a string
* @str: The string to print it half
* Return: void
*/

void puts_half(char *str)
{
	int i, sec_half, length;

	length = strlen(str);

	if (length % 2 == 0)
	{
		sec_half = length / 2;
		i = sec_half;

		while (i < length)
		{
			_putchar(str[i]);
			i++;
		}
			_putchar('\n');
	}
	else
	{
		_putchar(str[length - 1]);
		_putchar('\n');
	}
}
