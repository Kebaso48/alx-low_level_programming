#include <stdio.h>
/**
 * main - prints number of arguments passed onto it
 * @argc: the number of programs supplied
 * @argv: the array of ointers to argument
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}	
