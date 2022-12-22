#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 0 if success, -1 if error and errno otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
