#include "main.h"
/**
 * print_diagonal - draws a diagonal using \ character
 * @n: The number of \ characters to be printed
 */
void print_diagonal(int n)
{
	int lin, spa;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (spa = 0; spa < lin; spa++)
				_putchar(' ');
			_putchar('\\');

			if (lin == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
