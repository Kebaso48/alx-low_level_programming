#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNTIONS_H

#include <stdarg.h>

/**
 * struct printer - a new struct type defining printer
 * @symbol: represent data type
 * @print: function pointer that print data type same as symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
}print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
