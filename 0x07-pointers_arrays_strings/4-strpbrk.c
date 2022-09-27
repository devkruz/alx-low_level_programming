
/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: The string to be search
* @accept: The string to search
* Return: If a found return the pointer to the string else null
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
			return ('\0');
}
