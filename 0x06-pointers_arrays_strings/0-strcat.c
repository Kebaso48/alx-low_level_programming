#include "main.h"
/**
 * _strcat - concatenates two strings overwriting terminating
 * null byte and adding it at the end
 * @dest: pointer to string to be concatenated
 * @src: the source string
 * Return: Pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest);
}
