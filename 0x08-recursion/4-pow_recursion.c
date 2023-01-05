#include "main.h"
/**
 * _pow_recursion - return value of x raised to power y
 * @x: the number that is raised
 * @y: the power
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	pow *= _pow_recursion(x, y - 1);

	return (pow);
}
