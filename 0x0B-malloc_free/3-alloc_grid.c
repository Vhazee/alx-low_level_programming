#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function has two dimensional nested loop to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **dim;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		dim[a] = malloc(sizeof(int) * width);

		if (dim[a] == NULL)
		{
			for (; a >= 0; a--)
				free(dim[a]);

			free(dim);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			dim[a][b] = 0;
	}

	return (dim);
}
