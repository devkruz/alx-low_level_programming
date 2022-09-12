#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints a string using fprintf
 * Description: This will print the
 * value of $toPrint to standarderror
 * output
 * Return: 1 aways
 */
int main(void)
{
	char toPrint[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, toPrint, 59);

	return (1);
}
