#include<stdio.h>
/**
 * main - Prints a string using fprintf
 * Description: This will print the
 * value of $toPrint to standarderror
 * output
 * Return: 1 aways
 */
int main(void)
{
	#define RED "\e[0;31m"
	char toPrint =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, RED toPrint "\n");
	return (0);
}
