#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function
 * @grid: pointer contains width address
 * @height: column of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < heightl i++)
	{
		free(grid[i]);
	}
	free(grid);
}
