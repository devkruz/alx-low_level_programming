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
	int fd1, lettcount, writecount;
	char *buff = calloc(letters, sizeof(char));


	if (filename == NULL)
		return (0);

	if (buff == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);

	if (fd1 < 0)
		return (0);

	lettcount = read(fd1, buff, letters);

	if (lettcount < 0)
		return (0);

	close(fd1);

	writecount = write(1, buff, lettcount);

	if (writecount <= 0)
		return (0);

	return (writecount);
}
