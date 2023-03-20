#include "main.h"

/**
 * _memset - fills a block of memory with specific value
 * @s: starting address of memeory to fill
 * @b: desired value
 * @n: bytes to fill
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
