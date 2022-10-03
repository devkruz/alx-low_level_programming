#include <stdlib.h>
#include <string.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: The string to be returned
*
* Return: If success returns a pointer to the duplicated string else NULL
*/

char *_strdup(char *str)
{
	int size, i;
	char *p_str;

	if (!str)
	{
		return (NULL);
	}

	size = strlen(str);

	p_str = (char *)malloc((size + 1) * sizeof(char));

	if (!p_str)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p_str[i] = str[i];
	}

	return (p_str);
}
