#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0-9
 */

void print_numbers(void)
{
	int g = 0;

	while (g < 10)
	{
		_putchar("%d");
		g++;
	}
	_putchar("\n");
}
