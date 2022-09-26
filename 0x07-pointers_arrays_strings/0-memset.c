
/**
* _memset - Fills memory with a constant byte
* @s: The memory to be filled
* @b: The bytes to fill the memory with
* @n: The amount of bytes to be filled
* Return: Pointer to the filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
