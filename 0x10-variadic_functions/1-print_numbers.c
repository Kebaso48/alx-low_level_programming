#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 * @separator: string printed between the numbers
 * @n: number of integers passed to function
 * @...: variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int i;

	va_start(no, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(no, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(no);
}
