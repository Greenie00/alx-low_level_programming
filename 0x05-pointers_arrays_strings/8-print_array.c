#include <stdio.h>

/**
 * print_array - Print an array
 *
 * @n: Argument
 * @a: Swcond Argument
 * Return: An array of numbers
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
