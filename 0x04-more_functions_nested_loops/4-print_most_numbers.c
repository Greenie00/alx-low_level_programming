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
		if (g == 2 || g == 4)
		{
			continue;
		}

		else if (g != 2 || g != 4)
		{
			_putchar(x + '0')
		}
	}
	_putchar('\n');
}
