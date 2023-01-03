#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string where the character is locaated
 * @c: the character
 * Return: a pointer to first occurence if c is found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
