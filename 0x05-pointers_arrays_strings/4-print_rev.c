#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print string in reverse
 *
 * @s: Argument for reverse print
 *
 * Return: Strings in reverse
 */

void print_rev(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		g++;
	}

	for (g -= 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}

	_putchar('\n');
}
