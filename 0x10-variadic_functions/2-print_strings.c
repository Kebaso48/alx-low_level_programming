#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: A variable number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;
	char *s;
	unsigned int i;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(word, char *);

		if (s == NULL)
			printf("(nil)");

		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(word);
}
