

/**
* _isalpha - checks for alphabetic character
* @c: character to be passed in to _isalpha
*
* Return: returns 1 if success and 0 otherwise
*/

int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
