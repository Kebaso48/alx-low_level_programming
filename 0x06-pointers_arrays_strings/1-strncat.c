#include "main.h"
/**
 * _strncat - concatenates two strings using
 * @n bytes from src
 * @dest: the string to be appended
 * @src: the string to append
 * @n:  number of bytes
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
