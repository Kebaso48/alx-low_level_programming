#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of inputted size
 * @nmemb: number of elements
 * @size: bytre size of each array element
 * Return: 0 if malloc fails or size of nmemb is NULL,
 * otherwise a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	f = memory;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (memory);
}
