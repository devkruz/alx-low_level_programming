
/**
* leet - Encodes a string into 1337
* @a: The string to be encoded
* Return: The encoded string
*/

char *leet(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = '4';
		}
		else if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = '3';
		}
		else if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = '0';
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = '7';
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = '1';
		}
			i++;
	}

		return (a);
}
