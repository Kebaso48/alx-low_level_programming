#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char al;

	while (count++ < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
