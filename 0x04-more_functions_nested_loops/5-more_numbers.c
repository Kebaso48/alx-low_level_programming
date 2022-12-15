#include "main.h"
/**
 * more_numbers - prints 1 to 14 ten times
 */
void more_numbers(void)
{
	int count, n;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
