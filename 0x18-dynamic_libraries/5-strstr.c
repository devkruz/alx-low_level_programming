
/**
* _strstr - locates a substring
* @haystack: The string to check
* @needle: The string to check for
* Return: If found return the pointer to the begining of locate
* string else if @needle is empty return @haystack else return
* NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle[0])
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[0])
			{
				return (haystack + i);
			}
		}
	}
	else
	{
		return (haystack);
	}
			return ('\0');
}
