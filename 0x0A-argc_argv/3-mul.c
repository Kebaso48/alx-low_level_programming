#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two number followed by new line
 * @argc: the arguments of the program
 * @argv: the array to pointers
 * Return: 0 if program prints has two arguments, otherwise 1
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);

	return (0);
}

