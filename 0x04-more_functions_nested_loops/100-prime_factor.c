#include <stdio.h>
/**
 * main - Finds and print the large prime factors
 * of 612852475143
 * Return: Always 0
 */
int main(void)
{
	long pri = 612852475143, dvd;

	while (dvd < (pri / 2))
	{
		if ((pri % 2) == 0)
		{
			pri /= 2;
			continue;
		}

		for (dvd = 3; dvd < (pri / 2); dvd += 2)
		{
			if ((pri % dvd) == 0)
				pri /= dvd;
		}
	}
	printf("%ld\n", pri);
	return (0);
}
