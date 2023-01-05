#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: the character to print
 * Return: 1 on success, -1 on error and errnno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
