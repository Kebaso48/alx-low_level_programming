#include <stdio.h>
/**
 * main - program that prints alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');
	return (0);
}
