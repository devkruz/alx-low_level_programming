
/**
* _strncat - Concatenates two strings using at most
* n bytes from src
* @dest: The array to be concatenated to
* @src: The array to concatenat
* @n: The amount of bytes to be copied form @src
* Return: The pointer to the concatenated array
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
