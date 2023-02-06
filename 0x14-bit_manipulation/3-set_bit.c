#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer to bit
 * @index: index to set value of
 * Return: -1 on error, otherwise 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
