#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the file it was compiled from
 *
 * Return: Nothin
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
