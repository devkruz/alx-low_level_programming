#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: The length of the string to be returned
* Return: Returns length of string @s
*/

int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
