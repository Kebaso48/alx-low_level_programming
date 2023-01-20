#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int (va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints char
 * @arg: list of arguments pointing characters to print
 */
void print_char(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);
	printf("%c", alpha);
}

/**
 * print_string - prints a string
 * @arg: list of arguments pointing to the string
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_int - prints an integer
 * @arg: list of arguments pointing to the integer
 */
void print_int(va_list arg)
{
	int no;

	no = va_arg(arg, int);
	printf("%d", no);
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to a float
 */
void print_float(va_list arg)
{
	float no;

	no = va_arg(arg, double);
	printf("%f", no);
}

/**
 * print_all - prints anything
 * @format: the variable type
 * @...: variable number of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	print_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
