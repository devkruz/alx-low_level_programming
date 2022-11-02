#include "main.h"

/**
 * main - copy the content of a file
 * into another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful else otherwise
 */

int main(int argc, char *argv[])
{
	FILE *fpto, *fpfrom;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fpto = fopen(argv[2], "w");
	fpfrom = fopen(argv[1], "r");
	if (fpfrom == NULL)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	while ((fgets(buff, sizeof(buff), fpfrom)) != NULL)
	{
		if ((fputs(buff, fpto)) == EOF)
		{
			dprintf(2, "Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((fclose(fpfrom)) == EOF)
	{
		dprintf(2, "Error: Can't close %d", fileno(fpfrom));
		exit(100);
	}
	if ((fclose(fpto)) == EOF)
	{
		dprintf(2, "Error: Can't close %d", fileno(fpto));
		exit(100);
	}
	return (0);
}
