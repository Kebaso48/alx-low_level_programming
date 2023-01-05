#include "main.h"

int squareroot(int no, int root);
int _sqrt_recursion(int n);

/**
 * squareroot - finds the natural root of a number
 * @no: the number
 * @root: the root to be tested
 * Return: natural root of n if it is natural and -1 if not natural
 */
int squareroot(int no, int root)
{
	if ((root * root) == no)
		return (root);

	if (root == no / 2)
		return (-1);

	return (squareroot(no, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number
 * Return: The root if it is natural and -1 if it is not
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	return (-1);

	if (n == 1)
	return (1);

	return (squareroot(n, r));
}
