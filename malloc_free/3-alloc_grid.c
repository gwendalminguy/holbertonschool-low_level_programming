#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int size = width * height;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* Allocating memory for each row */
	for (row = 0 ; row < height ; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		/* Freeing every row if malloc fails */
		if (grid[row] == NULL)
		{
			while (row >= 0)
			{
				free(grid[row]);
				row--;
			}
			
			free(grid);
			return (NULL);
		}
		
		/* Filling the whole grid with 0 */
		for (col = 0 ; col < width ; col++)
		{
			grid[row][col] = 0;
		}
	}

	return (grid);
}
