#include "main.h"
#include <stdio.h>
/**
 * print_array - prints inputed elements of an array
 * @a: the array
 * @n: number of elemnts to be printed
 */
void print_array(int *a, int n)
{
	int chr;

	for (chr = 0; chr < n; chr++)
	{
		printf("%d", a[chr]);

		if (chr == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
