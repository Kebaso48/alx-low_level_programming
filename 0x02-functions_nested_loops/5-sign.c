#include "main.h"
/**
 * print_sign - prints thr sign of a number
 * @n: number that is printed
 * Return: 1 if greter than zero,
 * 0 if equal to zero and -1 if less
 * than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
