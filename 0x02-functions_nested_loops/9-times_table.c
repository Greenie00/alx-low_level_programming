#include "main.h"

/**
 * times_table - Multiplication
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, c, g, h;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				g = c % 10;
				h = (c - g) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(g + '0');
				_putchar(h + '0');
			}
			else
			{
				if (b != 0)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
