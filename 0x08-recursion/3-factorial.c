

/**
* factorial - returns the factorial of a given number
* @n: The number to return it factorial
* Return: The factorial of @n
*/

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));
	}

		return (-1);
}
