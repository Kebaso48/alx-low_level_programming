#include "main.h"
/**
 * clear_bit - set value of bit to 0 at given index
 * @n: pointer to the bit
 * @index: index to set bit from 0
 * Return: 1 if it works, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
