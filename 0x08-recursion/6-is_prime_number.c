#include "main.h"

int divisible(int no, int div);
int is_prime_number(int n);

/**
 * divisible - does divisibility test
 * @no: the number
 * @div: the divisor
 * Return: 1 if divisible, 0 if not
 */
int divisible(int no, int div)
{
	if (no % div == 0)
		return (0);
	if (div == no / 2)
		return (1);

	return (divisible(no, div + 1));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: the number to be checked
 * Return: 1 if integer is prime and 0 if not
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, div));
}
