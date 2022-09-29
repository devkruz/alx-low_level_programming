
/**
* _sqrt - Finds the natural square root of an
* inputted number
* @num: The number to find the square root of
* @guess: The root guess number
*
* Return: If the number has a natural square root return
* the square root  else -1
*/


int _sqrt(int num, int guess)
{
	if (guess < num)
	{
		if ((guess * guess) == num)
			return (guess);
	}
	else
		return (-1);

	return (_sqrt(num, guess + 1));
}


/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find it square root of
*
* Return: If @n has a natural square root return the
* natural square root of n else return -1
*/


int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n == 1)
		return (1);
	if (n == 0)
		return (0);

	return (_sqrt(n, guess));
}



