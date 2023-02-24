#include "main.h"

/**
 * print_diagonal - Prints diagonal line
 *
 * @n: Argument
 * Return: A diagonal line made up of several forward slash
 */

void print_diagonal(int n)
{
	int f,h;

	if (n <= 0)
	{
		_putchar('\n')
	}

	else
	{
		for (f = 0; f < n; f++)
		{
			for (g = 0; g < n; g++)
			{
				_putchar(" ");
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
