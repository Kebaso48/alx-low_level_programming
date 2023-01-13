#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: space allocated in bytes
 * Return: pointer tothe allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
