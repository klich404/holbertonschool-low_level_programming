#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: is a doble pointer
 * @height: is an integer
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
