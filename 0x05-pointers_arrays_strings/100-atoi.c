#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	do {

	if (*s == '-')
		sign *= -1;

		else if ((*s >= '0') && (*s <= '9'))
			result = (result * 10) + (*s - '0');

		else if (result > 0)
			break;

	} while (*s++);

	return (result * sign);
}
