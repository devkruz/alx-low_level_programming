
/**
* rot13 - Encodes a string using rot13
* @a: The string to be endcoded
* Return: Tht endcoded string
*/

char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (((a[i] >= 65) && (a[i] < 78)) || ((a[i] >= 97) && (a[i] < 110)))
		{
			a[i] += 13;
		}
		else if (((a[i] >= 78) && (a[i] < 91)) || ((a[i] >= 110) && (a[i] < 123)))
		{
			a[i] -= 13;
		}
			i++;
	}
		return  (a);
}
