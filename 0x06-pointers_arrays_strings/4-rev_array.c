#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: The array to be reversed
* @n: The length of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int length = n, temp = 0, i;

	for (i = 0; i < (length / 2); i++)
	{
		temp = a[i];
		a[i] = a[length - i - 1];
		a[length - i - 1] = temp;
	}
}
