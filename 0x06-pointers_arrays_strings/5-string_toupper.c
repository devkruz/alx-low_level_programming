#include <string.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @a: The string to be uppercased
* Return: Pointer to the amended array
*/

char *string_toupper(char *a)
{
	int length = strlen(a);
	int i = 0;

	while (i < length)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
			i++;
	}
		return (a);
}
