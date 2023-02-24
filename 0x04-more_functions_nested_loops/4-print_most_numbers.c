#include "main.h"

/**
 * print_most_numbers - Print numbers 0-9 except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int g = 0;

	while (g < 10)
	{
		_putchar(g + '0');
		g++;
		if (g == 2 || g == 4)
		{
			continue;
		}
	}
	_putchar('\n');
}
