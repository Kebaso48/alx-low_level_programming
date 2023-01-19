#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: size of the array
 * @cmp: function used to compare values
 * Return: -1if size is less than 0 or no elements match,
 * otherwise index of first element cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ( cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
