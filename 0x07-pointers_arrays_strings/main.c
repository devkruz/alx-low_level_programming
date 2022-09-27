#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

char *_strpbrk(char *s, char *accept);

int main(void)
{
char *s = "hello, world";
char *f = "world";
char *t;

t = _strpbrk(s, f);
printf("%s\n", t);
return (0);
}	

void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}
