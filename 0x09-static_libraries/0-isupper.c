#include "main.h"

/**
* _isupper - Checks for uppercase charactercher
* @c: The character to be passed in
* Return: Returns 1 if @c is uppercase
* returns 0 otherwise
*/

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
