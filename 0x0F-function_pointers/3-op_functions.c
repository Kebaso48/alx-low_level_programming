#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sums two integers
 * @a: first integer
 * @b: the second integer
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: first interger
 * @b: second integer
 * Return: result of difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
