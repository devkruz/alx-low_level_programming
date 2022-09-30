#include <stdio.h>

/**
* main - Print the number of argument
* @argc: Argument count
* @argv: Argument array
*
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

