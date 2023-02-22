#include "main.h"

/**
 * times_table - Multiplication
 *
 * Return: 0 
 */

void times_table(void)
{
	int a, b, c, d, g, h;

	for(a = 0; a <= 9; a++)
	{
		for(b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				g = c % 10;
				h = (c -g) / 10;
				_putchar(g + '0');
				_putchar(h + '0');
			}
			else
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
