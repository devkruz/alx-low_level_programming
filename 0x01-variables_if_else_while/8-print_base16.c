#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
	char charc;
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	for (charc = 'a'; charc <= 'f'; charc++)
	{
		putchar(charc);
	};
		putchar('\n');

	return (0);
}
