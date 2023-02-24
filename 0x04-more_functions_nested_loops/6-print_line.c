#include "main.h"

/**
 * print_line - Prints underscore to form a line
 *
 * @n: Argument
 * Return: Lines
 */

void print_line(int n)
{
	int g;

	if (g <= 0)
	{
		_putchar('\n');
	}

	else if (g != 0 || g > 0)
	{
		for (g = 0; g < n; g++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
