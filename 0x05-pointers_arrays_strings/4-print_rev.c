#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0, rvs;

	while (s[rvs++])
		len++;

	for (rvs = len - 1; rvs >= 0; rvs--)
		_putchar(s[rvs]);

	_putchar('\n');
}
