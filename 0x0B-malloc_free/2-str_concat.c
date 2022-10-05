#include <string.h>
#include <stdlib.h>

/**
* str_concat - Concatenates two strings
* @s1: The string to be concatenated
* @s2: The string to concatenate
*
*Return: Pointer to the new array
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int arr_size, i = 0, j = -1;
	char *arr_ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	arr_size = strlen(s1) + strlen(s2);
	arr_ptr = (char *)malloc(sizeof(char) * arr_size);

	if (!arr_ptr)
		return (NULL);

	while (s1[i])
	{
		arr_ptr[i] = s1[i];
		i++;
	}

	do {
		j++;
		arr_ptr[i] = s2[j];
		i++;
	} while (s2[j]);

	return (arr_ptr);

}
