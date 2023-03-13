#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Using the free function
 *
 * @grid: First argument
 * @height: Second argument
 *
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
