#include <stdio.h>
/**
 * main - prints the first 98 fibonnaci
 * starting with 1
 * Return: Always 0
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num1_a, num1_b, num2_a, num2_b;
	unsigned long a, b;
	int count;

	for (count = 0; count < 92; count++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);

		num1 = num2;
		num2 = sum;
	}

	num1_a = num1 / 10000000000;
	num2_a = num2 / 10000000000;
	num1_b = num1 % 10000000000;
	num2_b = num2 % 10000000000;

	for (count = 93; count <= 98; count++)
	{
		a = num1_a + num2_a;
		b = num1_b + num2_b;
		if (num1_b + num2_b > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}

		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");
		num1_a = num2_a;
		num1_b = num2_b;
		num2_a = a;
		num2_b = b;
	}
	printf("\n");
	return (0);
}
