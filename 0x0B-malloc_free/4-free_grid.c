#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees up two dimensional array
 * @grid:two dimensional array to free
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

