#include "main.h"
/**
 * print_square - prints a square using # character
 * @size: The size of square
 */
void print_square(int size)
{
	int hei, bas;

	if (size > 0)
	{
		for (hei = 0; hei < size; hei++)
		{
			for (bas = 0; bas < size; bas++)
				_putchar('#');

			if (hei == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
