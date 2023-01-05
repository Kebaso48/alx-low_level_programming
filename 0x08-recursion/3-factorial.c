#include "main.h"
/**
 * factorial - returns the factorial of number
 * @n: the number
 * Return: factorial of n if n > 0, -1 if n < 0
 */
int factorial(int n)
{
	int fac = n;

	if (n < 0)
		return (-1);

	else if (n > 0 && n <= 1)
		return (1);

	fac *= factorial(n - 1);

	return (fac);
}
