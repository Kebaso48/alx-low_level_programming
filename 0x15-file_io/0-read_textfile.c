#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to POSIX standard output
 * @filename: pointer to file name
 * @letters: number of letters it should read and print
 * Return: 0 if filename is NULL or if write fails, otherwise
 * the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *words;
	ssize_t op, wr, re;

	words = malloc(sizeof(char) * letters);
	if (words == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, words, letters);
	wr = write(STDOUT_FILENO, words, re);

	if (op == -1 || re == -1 || wr == -1)
	{
		free(words);
		return (0);
	}

	free(words);
	close(op);

	return (wr);
}
