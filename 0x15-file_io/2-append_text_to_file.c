#include "main.h"

/**
 * append_text_to_file - appends to a file
 * @filename: the name of file to create
 * @text_content: the content of the file
 *
 * Return: 1 if successful else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);


	fp = fopen(filename, "a+");

	if (fp == NULL)
		return (-1);
	if (text_content == NULL)
		fclose(fp);
	else
	{
		if (fputs(text_content, fp) == EOF)
			return (-1);
		fclose(fp);
	}

	return (1);

}
