#include "main.h"

/**
 * print_sign - print sign depending on the ineger value of n
 *
 * @n: Argument
 *
 * Return: Returns 1 if n is > 0, 0 if n = 0 and -1 if n is < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
