 #include "main.h"
/**
 * puts_half - prints one half of a string
 * @str: the string that is to be halfed
 */
void puts_half(char *str)
{
	int chr = 0, len = 0, a;

	while (str[chr++])
		len++;

	if ((len / 2) == 0)
		a = len / 2;

	else
		a = (len + 1) / 2;


	for (chr = a; chr < len; chr++)
		_putchar(str[chr]);

	_putchar('\n');
}

