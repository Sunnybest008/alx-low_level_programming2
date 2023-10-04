#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid
 * previously created by alloc_grid
 * @grid: pointer to the 2-dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
