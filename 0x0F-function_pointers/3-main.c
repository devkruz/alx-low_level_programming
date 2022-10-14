#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Performs simple operations
* @argc: Arguments count
* @argv: Argements vector
*
* Return: The result of the operation
*/

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' && b == 0) ||
		(*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(op)(a, b);

	printf("%d\n", result);

	return (0);
}
