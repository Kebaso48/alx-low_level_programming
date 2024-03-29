#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on esch array element
 * @array: the array
 * @size: the size of array
 * @action: pointer to action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
