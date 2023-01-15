#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space in bytes
 * @new_size: size of newly allocated memory space
 * Return: ptr if new_size and old_size are equal,
 * NULL if new_size is equal to 0 and ptr is not NULL,
 * otherwise a pointer to allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	unsigned int i;
	char *copy_ptr, *f;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy_ptr = ptr;
	memory = malloc(sizeof(*copy_ptr) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = memory;

	for (i = 0; i < old_size && i < new_size; i++)
		f[i] = *copy_ptr++;

	free(ptr);
	return (memory);
}
