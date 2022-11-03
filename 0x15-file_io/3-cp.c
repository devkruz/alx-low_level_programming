#include "main.h"

/**
 * cp - copys the content of one file into another
 * @fpfrom: the pointer to file to copy
 * @fpto: the pointer to file to copy to
 * @from: the name of the file to copy from
 * @to: the name of the file to copy to
 *
 * Return: nothing
 */

void cp(FILE *fpfrom, FILE *fpto, char *from, char *to)
{
	char buff[1024];

	if (fpfrom == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n",
		from);
		exit(98);
	}
	if (fpto == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while ((fgets(buff, sizeof(buff), fpfrom)) != NULL)
	{
		if ((fputs(buff, fpto)) == EOF)
		{
			dprintf(2, "Can't write to %s\n",
			to);
			exit(99);
		}
	}
	if ((fclose(fpfrom)) == EOF)
	{
		dprintf(2, "Error: Can't close %d\n",
		fileno(fpfrom));
		exit(100);
	}
	if ((fclose(fpto)) == EOF)
	{
		dprintf(2, "Error: Can't close %d\n",
		fileno(fpto));
		exit(100);
	}

	chmod(to, 0664);
}

/**
 * main - calls cp function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful else otherwise
 */

int main(int argc, char *argv[])
{
	FILE *fpto, *fpfrom;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fpto = fopen(argv[2], "w");
	fpfrom = fopen(argv[1], "r");

	cp(fpfrom, fpto, argv[1], argv[2]);

	return (0);
}
