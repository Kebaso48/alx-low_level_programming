#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: pointer of the memory to fill
 * @b: character to fill the memory
 * @n: bytes of the memory holder
 * Return: pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return (s);

}
