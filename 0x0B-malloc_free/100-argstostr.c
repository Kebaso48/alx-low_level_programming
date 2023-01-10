#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments passed to the program
 * @av: the array of pointers to arguments
 * Return: NULL if ac or av equals to 0, otherwise a pointer to the string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int count, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		for (byte = 0; av[count][byte]; byte++)
			size++;
	}
	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	for (count = 0; count < ac; count++)
	{
		for (byte = 0; av[count][byte]; byte++)
			s[i++] = av[count][byte];

		s[i++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
