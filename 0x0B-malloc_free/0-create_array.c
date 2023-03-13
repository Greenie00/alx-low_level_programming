#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create an array
 *
 * @size: Site size
 * @c: Srcond argument
 *
 * Return always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
	{
		return (NULL);
	}

	y = malloc(sizeof(char) * size);

	if (y == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}

	return (y);
}
