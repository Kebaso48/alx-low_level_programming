#include <stdio.h>
/**
 * main - prints number of arguments passed onto it
 * @argc: the number of programs supplied
 * @argv: the array of ointers to argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
