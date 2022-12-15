#include <stdio.h>
/**
 * main - prints numbers from 1-100, but prints
 * Fizz for multiples of 3, Buzz for multiples of
 * 5 and FizzBuzz for multiples of both 3 and 5
 * Return: Always 0;
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if
		 ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");
		else if ((n % 3) == 0)
			printf("Fizz");
		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
