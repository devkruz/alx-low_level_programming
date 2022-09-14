#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: The number to be passed to print_last_digit
* Return: Returns the last digit of a number
*/

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit >= 0)
	{

	}
	else
	{
		lastDigit *= -1;
	}

	_putchar('0' + lastDigit);
	return (lastDigit);
}
