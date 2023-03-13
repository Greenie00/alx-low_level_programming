#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Allocation grid
 * @width: First argument
 * @height: Second argument
 *
 * Return: always 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);

		if (x[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(x[j]);
			}
			free(x);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			x[k][l] = 0;
		}
	}

	return (x);
}
