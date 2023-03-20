#include "main.h"
/**
 * _strcpy - copies string pointed br @src including terminated
 * null type  to beffer pointed by @ dest
 * @src: the source string
 * @dest: the buffer for copied string
 * Return: a pointer to destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int chr = 0;

	while (src[chr] != '\0')
	{
		dest[chr] = src[chr];
		chr++;
	}
	dest[chr] = '\0';
	return (dest);
}
