#include <stdio.h>
/**
 * main - list all multiples of 3 and 5
 * that are natural number below 1024
 * Return: Always 0
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) || (n % 5) == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
