#include <stdio.h>
#include <stdlib.h>
/**
 * main - ads positive numbers
 * @argc: the arguments passed to program
 * @argv: the array of pointer of artgument
 * Return: 1 if they number is non-digit,otherwise 0
 */
int main(int argc, char *argv[])
{
	int no, dig, add = 0;

	for (no = 1; no < argc; no++)
	{
		for (dig = 0; argv[no][dig]; dig++)
		{
			if (argv[no][dig] < '0' || argv[no][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[no]);
	}
	printf("%d\n", add);
	return (0);
}
