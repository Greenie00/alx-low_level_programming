#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array
 *
 * @array: First arg
 * @size: Second arg
 * @action: Third arg
 *
 * Return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
