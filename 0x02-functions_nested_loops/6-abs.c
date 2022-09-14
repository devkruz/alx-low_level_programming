#include "main.h"

/**
* _abs - Computes the absolute value of an integer
* @n: character to be passed in to _abs
*
* Return: returns the absolute value of @n
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		int absolute = -1 * n;

		return (absolute);
	}
}
