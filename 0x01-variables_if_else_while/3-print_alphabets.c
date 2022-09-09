#include <stdio.h>
/**
 * main - Print all alphabet in lowercase
 *Return: Always 0
 */

int main(void)
{
	char charc;
	char charx;

	for (charc = 'a'; charc <= 'z'; charc++)
	{
		putchar(charc);
	};
	for (charx = 'A'; charx <= 'Z'; charx++)
	{
		putchar(charx);
	};
		putchar('\n');

	return (0);
}
