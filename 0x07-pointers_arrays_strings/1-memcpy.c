
/**
* _memcpy - Copies memory area
* Description: The function copies n bytes from
* memory area src to memory area dest
*
* @dest: The memory to copy to
* @src: The The memory to copy from
* @n: The amount of bytes to be copied
* Return: Pointer to the copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
