#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int dig1, dig2, mult;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		_putchar('0');

		for (dig2 = 1; dig2 < 10; dig2++)
		{
			_putchar(',');
			_putchar(' ');

			mult = dig1 * dig2;

			if (mult < 10)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
