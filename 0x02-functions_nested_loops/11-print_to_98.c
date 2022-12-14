#include<stdio.h>
/**
 * print_to_98 - prints all numbers from inputed
 * value to 98 separated by a comma
 * @num: where to begin the count
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}
	else
	{
		while (num < 98)
			printf("%d, ", num++);
		printf("%d\n", num);
	}
}
