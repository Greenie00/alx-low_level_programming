#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0-14 ten times
 */

void more_numbers(void)
{
	int x, g;

	for (x = 0; x < 11; x++)
	{
		for (g = 0; g < 15; g++)
		{
			if (g > 9)
			{
				_putchar((g / 10) + '0');
			}
		_putchar((g / 10) + '0');
		}
	_putchar('\n');
	}
}
