#include "main.h"
/**
 * print_times_table - prints times table of
 * inputed value upto 15
 * @n: inputed value to print times table
 */
void print_times_table(int n)
{
	int num1, num2, mult;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				mult = num1 * num2;

				if (mult < 100)
					_putchar(' ');
				if (mult <= 9)
					_putchar(' ');

				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
				}
				else if (mult <= 99 && mult >= 10)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
