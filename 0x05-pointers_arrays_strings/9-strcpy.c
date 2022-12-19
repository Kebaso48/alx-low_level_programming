#include "main.h"
/**
 * _strcpy - copies string pointed br @src including terminated
 * null type  to beffer pointed by @ dest
 * @src: the source string
 * @dest: the buffer for copied string
 * Return: a pointer to destination string @dest
 */
char *_strcpy(char *src, char *dest)
{
	int chr = 0;

	while (src[chr])
	{
		dest[chr] = src[chr];
		chr++;
	}
	return (dest);
}
