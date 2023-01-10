#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid - grid created
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int c;

	if (grid == NULL)
	{
		free(grid);
	}
	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
