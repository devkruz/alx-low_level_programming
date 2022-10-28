#include "main.h"

/**
 * _pow - raise a number to a power of @b
 * @a: the number to be raised
 * @b: the power to be used
 *
 * Return: the result of the raised number
 */


unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int result = 1, i;

	for (i = 0; i < b; i++)
		result *= a;

	return (result);
}

/**
 * binary_to_uint - converts a binary to a decemal
 * @b: the binary to be converted
 *
 * Return: the converted int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 0;
	int i = 0, len = 0;
	const char *bit = b;

	if (bit == NULL)
		return (0);

	while (bit[len] != '\0')
		len++, pow++;

	len = len - 1;
	pow = pow - 1;

	while (bit[i] != '\0' && len >= 0)
	{
		if (bit[i] != '1' &&  bit[i] != '0')
			return (0);

		dec += ((bit[i] - '0') * _pow(2, pow));
		i++, len--, pow--;
	}

	return (dec);
}
