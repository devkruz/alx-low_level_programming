#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet, in lowercase 10 times
* Return: void
*/


void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	};
}


/**
* print_alphabet  - Prints the alphabet, in lowercase
* Return: void
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	};
		_putchar('\n');
}
