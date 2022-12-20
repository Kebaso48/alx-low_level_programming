#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates passwords for program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	char passwd[84];
	int i = 0, sum = 0, diff_a, diff_b;

	srand(time(0));

	while (sum < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		sum += passwd[i++];
	}

	passwd[i] = '\0';

	if (sum != 2772)
	{
		diff_a = (sum - 2772) / 2;
		diff_b = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_a++;

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + diff_a))
			{
				passwd[i] -= diff_a;
				break;
			}
		}
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + diff_b))
			{
				passwd[i] -= diff_b;
				break;
			}
		}
	}
	printf("%s", passwd);

	return (0);
}
