#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: the stringwith the characters
 */
void puts2(char *str)
{
	int chr = 0;
	int len = 0;

	while (str[chr++])
		len++;

	for (chr = 0; chr < len; chr += 2)
		_putchar(str[chr]);

	_putchar('\n');
}
