#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the matrix grid
 * @height: height of the matrix grid
 *
 * Return: A pointer to the 2 dimensional array, or NUll
 * if otherwise.
 */

int **alloc_grid(int width, int height)
{
int i, j, **grid;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(*grid) * height);

if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(**grid));
if (grid[i] == NULL)
{
for (i--; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
