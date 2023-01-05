#include "main.h"

int _strlen(char *s);
int palindrome(char *s, int length, int i);
int is_palindrome(char *s);

/**
 * _strlen - checks the length of string
 * @s: the string
 * Return: the string length
 */
int _strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += _strlen(s + length);
	}
	return (length);
}

/**
 * palindrome - checks if a string is a palindrome
 * @s: the string
 * @length: the length of string
 * @i: index of string to be checked
 * Return: 1 if it is a palindrome, 0 if not
 */

int palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (palindrome(s, length, i + 1));

	return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: the string
 * Return: 1 if it is a palindrome and 0 if it is not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen(s);

	if (!(*s))
		return (1);
	return (palindrome(s, length, i));
}
