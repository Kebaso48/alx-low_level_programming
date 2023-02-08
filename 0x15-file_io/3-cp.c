#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buf(char *file);
void close_file(int fdes);

/**
 * create_buf - allocates 1024 byte to buffer
 * @file: file to cntain stored chars
 * Return: pointer to new buffer
 */
char *create_buf(char *file)
{
	char *words;

	words = malloc(sizeof(char) * 1024);
	
	if (words == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (words);
}

/**
 * close_file - close file descriptors
 * @fdes: the file descriptors
 */
void close_file(int fdes)
{
	int cl;

	cl = close(fdes);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdes);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: number of arguments supplied to a program
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fro, to, re, wr;
	char *words;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	words = create_buf(argv[2]);
	fro = open(argv[1], O_RDONLY);
	re = read(fro, words, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from %s\n", argv[1]);
			free(words);
			exit(98);
		}

		wr = write(to, words, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				 "Error: Can't write to %s\n", argv[2]);
			free(words);
			exit(99);
		}

		re = read(fro, words, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(words);
	close_file(fro);
	close_file(to);

	return (0);
}
