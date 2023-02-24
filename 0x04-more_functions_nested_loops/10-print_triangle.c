#include "main.h"

/**
 * print_triangles - Print triangles with #
 *
 * @size: Argument
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n')
	}

	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(' ');
			}

			for (c = 0; z <= a; z++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
