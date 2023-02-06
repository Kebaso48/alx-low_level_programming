#include "main.h"
/**
 * flip_bits -  function to check no of bits to flip
 * to get one number to another
 * @n: the number
 * @m: number to flip to
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}
	return (b);
}
