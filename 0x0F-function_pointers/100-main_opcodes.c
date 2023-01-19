#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of itself
 * @argc: number of arguments
 * @argv: array of pointer to arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int byte, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;
