#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: points to a string with 0 an 1 chars
 * Return: 0 if string chars are not 0 or 1 or b is NULL, otherwise
 * converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int no = 0, mul = 1;
	int length;

	if (*b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '1' && b[length] != '0')
			return (0);

		no += (b[length] - '0') * mul;
		mul *= 2;
	}

	return (no);
}
