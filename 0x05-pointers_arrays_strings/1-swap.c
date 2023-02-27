#include <stdio.h>

/**
 * swap_int- Swap values for a and b
 *
 * @a: First argument
 * @b: Second argument
 *
 * Return: a reurns as b and b as a
 */

void swap_int(int *a, int *b)
{
	int g = *a;
	int h = *b;

	*a = h;
	*b = g;
}
