#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: the string
 * @accept: The prefix thatbis measured
 * Return: number of bytes from initial string with the prefixes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byt++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byt);
		}
		s++;
	}
	return (byt);
}
