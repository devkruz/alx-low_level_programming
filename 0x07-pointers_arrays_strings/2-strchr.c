
/**
* _strchr -locates a character in a string
* @s: The array to check for @c
* @c: The character to be check
* Return: Pointer to the @c if found else NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
			i++;
	}
		return ('\0');
}
