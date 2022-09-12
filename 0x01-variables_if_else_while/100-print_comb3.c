#include <stdio.h>
/**
 * main - Prints all possible combinations of
 * single-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int num, nums;

	for (num = '0'; num <= '9'; num++)
	{
		for (nums = '0'; nums <= '9'; nums++)
		{
			if (num < nums)
			{
				putchar(num);
				putchar(nums);

				if (num != '8')
				{
				putchar(',');
				putchar(' ');
				};
			};
		};

	};
		putchar('\n');
		return (0);
}
