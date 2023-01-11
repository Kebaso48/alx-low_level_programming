#include "main.h"
#include <stdlib.h>

int word_end(char *s);
int word_count(char *s);
char **strtow(char *str);

/**
 * word_end - locates the index marking at the end of first word
 * @s: the sting to search
 * Return: the index marking end of first word
 */
int word_end(char *s)
{
	int i = 0, length = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * word_count - counts the word in a string
 * @s: the string with the words
 * Return: number of words in the string
 */
int word_count(char *s)
{
	int i = 0, length = 0, word = 0;

	for (i = 0; *(s + i); i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(s + i) != ' ')
		{
			word++;
			i += word_end(s + i);
		}
	}
	return (word);
}

/**
 * strtow - returns words from a string
 * @str: the string
 * Return: NULL if it fails or string is null or empty,
 * otherwise a pointer to the array(words)
 */

char **strtow(char *str)
{
	char **strings;
	int i = 0, word, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = word_count(str);
	if (word == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (word + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < word; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_end(str + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
