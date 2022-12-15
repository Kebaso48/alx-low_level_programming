#include <stdio.h>
/**
 * main - prints sum of even numbers in
 * a fibonnaci not exceeding 4000000
 * Return: Always 0
 */
int main(void);
{
	unsigned long num1 = 0, num2 = 1, add;
	float sum;

	while (1)
	{
		add = num1 + num2;
		if (add > 4000000)
			break;

		if ((add % 2) == 0)
			sum += add;

		num1 = num2;
		num2 = add;
	}
	printf("%.0f\n", sum);

	return (0);
}
