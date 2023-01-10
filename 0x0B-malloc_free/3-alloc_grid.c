#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: the width of the 2 dimensional arrays
 * @height: the height of the 2 dimensional array
 * Return: fails if width or height is less than 0,
 * otherwise a pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twd_array;
	int wid_i, hei_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twd_array = malloc(sizeof(int *) * height);

	if (twd_array == NULL)
		return (NULL);

	for (hei_i = 0; hei_i < height; hei_i++)
	{
		twd_array[hei_i] = malloc(sizeof(int) * width);

		if (twd_array[hei_i] == NULL)
		{
			for (; hei_i >= 0; hei_i--)
				free(twd_array[hei_i]);

			free(twd_array);
			return (NULL);
		}
	}

	for (hei_i = 0; hei_i < height; hei_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			twd_array[hei_i][wid_i] = 0;
	}
	return (twd_array);
}
