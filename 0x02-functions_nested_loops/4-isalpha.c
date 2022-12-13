#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: is character that is checked
 * Return: 1 if character is lower or uppercase letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
	 || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
