#include <stdio.h>

/**
 * main -prints lowercase alphabets
 * except q and e follewd by new line
 * Return: Always 0
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}

	putchar('\n');
	return (0);
}
