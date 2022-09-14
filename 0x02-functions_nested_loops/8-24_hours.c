#include "main.h"
#include "main.c"
/**
* jack_bauer - prints every minute of the day of Jac
* k Bauer
* Return: Returns 00:00 to 23:59
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10 && minute < 10)
			{
				_putchar('0');
				_putchar('0' + hour);
				_putchar(':');
				_putchar('0');
				_putchar('0' + minute);
				_putchar('\n');
			}
			else if (hour < 10)
			{
				_putchar('0');
				_putchar('0' + hour);
				_putchar(':');
				print_long(minute);
				_putchar('\n');
			}
			else if (minute < 10)
			{
				print_long(hour);
				_putchar(':');
				_putchar('0');
				_putchar('0' + minute);
				_putchar('\n');
			}
			else
			{
				print_long(hour);
				_putchar(':');
				print_long(minute);
				_putchar('\n');
			};
		};
	};
}

