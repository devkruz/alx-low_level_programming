#include <stdio.h>

/**
* main - Prints all argument its recieves
* @argc: The argument count
* @argv: The argument array
*
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
