#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array of integers
 * @grid: pointer to the array
 * @height: array height
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0 ; row < height ; row++)
	{
		free(grid[row]);
	}

	free(grid);
}
