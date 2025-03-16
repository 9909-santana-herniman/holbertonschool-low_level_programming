#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D grid previously created
 * by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The number of rows in the grid.
 */

void free_grid(int **grid, int height)
{
	int y; /* Loop counter for rows */

	/* Check if grid is NULL or height is invalid */
	if (grid == NULL || height <= 0)
	{
		return;
	}
	/* Loop through each row and free its allocated memory */
	for (y = 0; y < height; y++)
	{
		free(grid[y]); /* Free each row (array of integers) */
	}
	/* Free the array that stored the row pointers */
	free(grid);
}
