#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings using provided bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate to s1
 * Return: NULL if function fails, otherwise a pointer
 * to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *_concat;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	_concat = malloc(sizeof(char) * (length + 1));

	if (_concat == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		_concat[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		_concat[length++] = s2[i];

	_concat[length] = '\0';

	return (_concat);
}
