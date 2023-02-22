#include "main.h"

/**
 * print_to_98 - PRint numbers upward or downward to 98
 *
 * @n: Argument
 *
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar("%d, ", n);
		n++;
	}

	else if (n > 98)
	{
		_putchar("%d, ", n);
		n--;
	}
	return (n);
}
