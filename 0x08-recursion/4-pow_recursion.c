

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: The number to find it power
* @y: The power of @x
* Return: The power of @x
*/

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}

		return (-1);
}
