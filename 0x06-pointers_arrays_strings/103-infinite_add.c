#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_i);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * adds_strings - adds numbers of two strings
 * @n1: string with first number to add
 * @n2: string with second number to add
 * @r: Buffer to store result
 * @r_i: current index of buffer
 * Return: Pointer to sum if r can store, otherwise 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_i)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_i--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_i) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_i--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_i) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, r_i--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_i) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && r_i >= 0)
	{
		*(r + r_i) = (tens % 10) + '0';
		return (r + r_i);
	}

	else if (tens && r_i < 0)
		return (0);

	return (r + r_i + 1);
}

/**
 * infinite_add - adds numbers two strings
 * @n1: string with first number to add
 * @n2: string with second number to add
 * @r: Buffer to store result
 * @size_r: The buffer size
 * Return: Pointer to sum if r can store, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;

	for (i = 0; *(n2 + i); i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
