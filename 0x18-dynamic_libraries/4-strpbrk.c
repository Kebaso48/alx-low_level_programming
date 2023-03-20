#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string being searched
 * @accept: the set of bytes to be searched
 * Return: pointer to the  bytes in s that match those in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
