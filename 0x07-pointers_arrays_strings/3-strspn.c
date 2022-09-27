#include <stdbool.h>

/**
* _strspn - Gets the length of a prefix substring
* @s: The string to check it initial segment
* @accept: The string use to check the initial segmanet of @s
* Return: The number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool found_match = false;

		for (j = 0; accept[j] != '\0'; j++)

			if (s[i] == accept[j])
			{
				found_match = true;
			}

		if (!found_match)
			break;

		result++;
	}

		return (result);
}
