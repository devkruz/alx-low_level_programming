#include <stdio.h>
#include "main.h"
/**
* print_chessboard - Prints the chessboard
* @a: The array to be printed
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int length;
	int length2;

	length2 = sizeof(a[0]) / sizeof(char);
	length = sizeof(a) / sizeof(char);

	while (i < length)
	{
		int j = 0;

		while (j < length2)
		{
			_putchar(a[i][j]);
				j++;
		}
			_putchar('\n');
				i++;
	}
		_putchar('\0');
}
