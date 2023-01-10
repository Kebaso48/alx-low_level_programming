#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Pointer too newly allocated memory where contents of s1
 * are followed with those of s2, NULL if concatenates fails
 */
char *str_concat(char *s1, char *s2)
{
	char *_concatstr;
	int i, concat_i = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	_concatstr = malloc(sizeof(char) * length);

	if (_concatstr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		_concatstr[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		_concatstr[concat_i++] = s2[i];

	return (_concatstr);
}
