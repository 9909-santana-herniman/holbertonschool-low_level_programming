#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that allocates a 2D array of integers
 * @width: Number of columns.
 * @height: Number of rows.
 * Return: Pointer to the allocated 2D array or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid; /* Pointer to an array of row pointers */
	int x = 0; /* Loop counter for rows */
	int y = 0; /* Loop counter for columns */

	/* Check for invalid input (zero or negative size) */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array of row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL) /* Check if malloc failed */
	{
		return (NULL);
	}

	/* Allocate memory for each row */
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
	/* If malloc fails, free all previousl allocated memory */
		if (grid[x] == NULL)
		{
		/* Free all previousluy allocated rows before returning NULL */
			while (x >= 0)
			{
				free(grid[x]); /* Free each allocated row */
				x--;
			}
			free(grid); /* Free the row pointer array */
			return (NULL);
		}
		/* Initialise all elements to 0 */
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid); /* Return pointer to allocated grid */
}
