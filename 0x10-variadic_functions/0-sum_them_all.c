#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all given parameters
 * @n: the number of parameters
 * @...: number of variables to calculate sum of
 * Return: 0 if n equals 0, otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ints;
	unsigned int i, sum;

	va_start(ints, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ints, int);

	va_end(ints);
	return (sum);
}
