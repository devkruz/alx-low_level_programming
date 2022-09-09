#include <stdio.h>
/**
 * main - Print all alphabet in lowercase
 *Return: Always 0
 */

int main(void)
{
	char charc;

	for (charc = 'a'; charc <= 'z'; charc++)
	{
		putchar(charc);
	};
		putchar('\n');

	return (0);
}
