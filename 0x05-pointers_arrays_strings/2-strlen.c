#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
