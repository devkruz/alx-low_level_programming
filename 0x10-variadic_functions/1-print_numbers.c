#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
* print_numbers - print all the number passed to it as argument
* @separator: The character ot seperate each print_numbers
* @n: The amount of argument to be passed in
*
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va_ptr;

	va_start(va_ptr, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(va_ptr, int);

		printf("%d", arg);

		if (i != n - 1 && separator != NULL)
			printf("%c ", *separator);
	}

	printf("\n");
}

