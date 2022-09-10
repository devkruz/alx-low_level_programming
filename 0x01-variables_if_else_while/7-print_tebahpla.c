#include <stdio.h>
/**
 * main - Print all alphabet in lowercase
 * in reverse
 *Return: Always 0
 */

int main(void)
{
	char charc;

	for (charc = 'z'; charc >= 'a'; charc--)
	{
		putchar(charc);
	};
		putchar('\n');

	return (0);
}
