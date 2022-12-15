#include "main.h"
/**
 * print_triangle - prints a triangle using # character
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int spa, hsh;

	if (size > 0)
	{
		for (hsh = 1; hsh <= size; hsh++)
		{
			for (spa = size - hsh ; spa > 0; spa--)
				_putchar(' ');

			for (spa = 0; spa < hsh; spa++)
				_putchar('#');

			if (hsh == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
