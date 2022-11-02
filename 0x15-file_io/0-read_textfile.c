#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: the name of the file to print
 * @letters: the amount of letter to print
 *
 * Return: the total letter printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t writecount = 0;
	FILE *fp;
	char c;


	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while ((EOF != (c = fgetc(fp)))
	&& (letters != writecount))
	{
		if (-1 == write(1, &c, 1))
			return (0);
		writecount++;
	}


	fclose(fp);

	return (writecount);
}
