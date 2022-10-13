#include <stdarg.h>
/**
* sum_them_all - sum all its parameter
* @n: The number of parameter to be passed in
*
* Return: 0 if @n is 0 else the sum of the parameter
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list va_ptr;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(va_ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(va_ptr, int);
	}

	va_end(va_ptr);

	return (sum);

}
