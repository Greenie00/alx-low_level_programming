#include "main.h"

/**
 * reverse_array - Reverse
 *
 * @a: Argument
 * @n: Argument
 * Result: 0
 */

void reverse_array(int *a, int n)
{
	int g;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		g = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] =  g;
	}
}
