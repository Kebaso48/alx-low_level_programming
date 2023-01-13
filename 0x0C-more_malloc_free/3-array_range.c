#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first interger value
 * @max: last integer value
 * Return: NULL if min > max or malloc fails,
 * otherwise a pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
