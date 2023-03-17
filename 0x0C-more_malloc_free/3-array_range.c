#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: Minimum value
 * @max: MAximum value
 *
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *g;

	if (min > max)
		return (NULL);

	g = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (g == NULL)
		return (NULL);

	while (min <= max)
	{
		g[i] = min;
		i++;
		min++;
	}

	return (g);
}
