
/**
* print_number - prints an integer
* @n: The integar to be printed
* return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}

		_putchar(n % 10 + '0');
}
