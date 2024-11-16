#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 * Return: Always 0.
 */

void free_grid(int **gird, int height)
{
if (gird != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}
