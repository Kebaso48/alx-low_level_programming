#include <stdio.h>
/**
 * main - prints the first fifty fibonnaci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, add;

	for (count = 0; count < 50; count++)
	{
		add = num1 + num2;
		printf("%lu", add);

		num1 = num2;
		num2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
