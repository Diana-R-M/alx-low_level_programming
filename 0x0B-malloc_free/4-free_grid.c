#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees the 2 dimensional grid
 * @grid: 2d grid value
 * @height: height of grid
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
