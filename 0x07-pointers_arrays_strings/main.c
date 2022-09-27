#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

unsigned int _strspn(char *s, char *accept);
void simple_print_buffer(char *buffer, unsigned int size);

int main(void)
{
char *s = "hello, world";
char *f = "oleh";
unsigned int n;

n = _strspn(s, f);
printf("%u\n", n);
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
