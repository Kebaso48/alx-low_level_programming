#include "main.h"
/**
 * string_toupper - change all lowercase letters in a string
 * to uppercase
 * @str: the string
 * Return: the changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';

		i++;
	}

	return (str);
}
