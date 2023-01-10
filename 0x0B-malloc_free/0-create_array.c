#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates a array of chars and initialize with
 * specific char
 * @size: the size of array
 * @c:initializes specific char
 * Return: NULL if size is 0 or if it fails, otherwise pointer
 * to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
