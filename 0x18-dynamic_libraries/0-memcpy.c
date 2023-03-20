#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: where the memory data is copied to
 * @src: source of memmory to copy
 * @n: bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
