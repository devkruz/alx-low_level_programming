#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: The string to concatenate
* @s2: The string to concatenate with
* @n: The amount of s2 to be concatenate with
* Return: The pointer to the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, string_size;
	char *str_ptr;

	if (n >= sizeof(s2))
		n = sizeof(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	string_size = sizeof(s1) + n;

	str_ptr = malloc(string_size * sizeof(char));

	if (!str_ptr)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_ptr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		str_ptr[i] = s2[j];

	str_ptr[i] = '\0';

	return (str_ptr);
}

