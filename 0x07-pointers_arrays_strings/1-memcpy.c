#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer of memory area to copy into
 * @src: where memory area is copied from
 * @n: number of bytes copied
 * Return: pointer to the copied area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
