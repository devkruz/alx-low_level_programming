/**
* _strcat - Concatenates two strings
* @dest: The array to be concatenated to
* @src: The array to concatenat
* Return: The pointer to the concatenated array
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
