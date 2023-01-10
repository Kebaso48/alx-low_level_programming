#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing the given string as a paremeter
 * @str: the given string
 * Return: NULL if sting is null or insufficient memeory space,
 * otherwise a pointer to duplicate
 * string
 */
char *_strdup(char *str)
{
	char *copy;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[length] = '\0';

	return (copy);
}
