#include <stdio.h>
/**
 * main - Print all alphabet in lowercase
 * except 'e' and 'q'
 *Return: Always 0
 */

int main(void)
{
	char charc;

	for (charc = 'a'; charc <= 'z'; charc++)
	{
		if (charc == 'q' || charc == 'e')
		{
		}
		else
		{
			putchar(charc);
		}
	};
		putchar('\n');

	return (0);
}
