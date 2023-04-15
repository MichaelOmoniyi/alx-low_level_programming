#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free a previously allocated two-dimensional
 * grid.
 * @grid: grid double pointer.
 * @height: grid height.
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
