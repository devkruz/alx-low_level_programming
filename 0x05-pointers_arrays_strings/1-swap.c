#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: The integers to be swaped
* @b: The integers to be swaped
* Return: void
*/

void swap_int(int *a, int *b)
{
	int n = *a, m = *b;

	*a = m;
	*b = n;
}
