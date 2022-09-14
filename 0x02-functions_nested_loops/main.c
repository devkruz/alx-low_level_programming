void print_long(long value)
{
	if (value != 0)
	{
		print_long(value/10);
		_putchar((value%10) + '0');
	}
}
