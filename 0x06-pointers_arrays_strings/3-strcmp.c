#include <string.h>

/**
* _strcmp -  compares two strings
* @s1: The string to compare with
* @s2 The string to be compared
* Return: Returns positve if @s1 is greather, negative
* if less, and zero if equal
*/

int _strcmp(char *s1, char *s2)
{
	int i = strlen(s1);
	int j = strlen(s2);
	int longer;

	if (i > j)
	{
		longer = i;
	}
	else
	{
		longer = j;
	}

	for (i = 0; i < longer; i++)
	{
		if (s1[i] == s2[i])
		{
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
		return (0);

}

