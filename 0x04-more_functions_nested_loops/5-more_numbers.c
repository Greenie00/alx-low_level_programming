#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0-14 ten times
 */

void more_numbers(void)
{
	int x = 0;
	int g = 0;

	while (x < 11)
	{
		for (g < 15)
		{
			_putchar(g + '0');
			g++;
		}
		_putchar('\n');
		x++;
	}
}
