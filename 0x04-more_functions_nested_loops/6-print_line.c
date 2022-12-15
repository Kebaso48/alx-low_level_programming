#include "main.h"
/**
 * print_line - draws line using _
 * @n: number of times _ is printed
 */
void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}
	_putchar('\n');
}
