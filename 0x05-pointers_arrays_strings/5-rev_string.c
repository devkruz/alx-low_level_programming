#include <stdlib.h>

/**
* rev_string - Reverse a string
* @s: The string to be reversed
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, j, index = 0, k = 0;
	char *r;

	while (s[i] != '\0')
	{
		i++;
	}

	r = (char *)malloc(i * sizeof(char));

	j = i - 1;

	while (j >= 0)
	{
		r[index] = s[j];
		j--;
		index++;
	}

	while (k < i)
	{
		s[k] = r[k];
		k++;
	}
}
