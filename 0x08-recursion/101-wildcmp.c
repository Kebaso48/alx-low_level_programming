#include "main.h"

int _strlen(char *s);
void wild_iterate(char **wilds);
char *match_postfix(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * _strlen - checks length of string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0, length = 0;

	if (*(s + i))
	{
		if (*s != '*')
			length++;

		i++;
		length += _strlen(s + i);
	}
	return (length);
}

/**
 * wild_iterate - iterates through a string with a wildcard
 * to find a non wild card character
 * @wilds: string with a wildcard
 */
void wild_iterate(char **wilds)
{
	if (**wilds == '*')
	{
		(*wilds)++;
		wild_iterate(wilds);
	}
}

/**
 * match_postfix - checks if a string matches the postfix of anothe string
 * @str: the string to be matched
 * @postfix: the postfix
 * Return: A pointer to null byte if they match,otherwise a pointer
 * to first unmatched character
 */

char *match_postfix(char *str, char *postfix)
{
	int str_len = _strlen(str) - 1;
	int postfix_len = _strlen(postfix) - 1;

	if (*postfix == '*')
		wild_iterate(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (match_postfix(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		wild_iterate(&s2);
		s2 = match_postfix(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
