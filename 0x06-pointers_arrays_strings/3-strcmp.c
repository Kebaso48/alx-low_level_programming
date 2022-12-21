#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the string compared with
 * Return: 0 if they are the same, negative difference if s1 < s2
 * positive difference if @s1 > @s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
