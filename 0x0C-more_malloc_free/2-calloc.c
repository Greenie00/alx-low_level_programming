#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: First argument
 * @size: Second argument
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0;
	int y = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	ptr = malloc(y);

	if (ptr == NULL)
		return (NULL);

	while (x < y)
	{
		ptr[x] = 0;
		x++
	}

	return (ptr);
}
