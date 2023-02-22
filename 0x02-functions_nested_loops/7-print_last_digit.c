#include "main.h"

/**
 * print_last_digit - Print last digit from numbers
 *
 * @g: The argumennt of print_last_digit
 *
 * Return: 0
 */

int print_last_digit(int g)
{
	int last_dig;

	last_dig = g % 10;

	if (last_dig < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return(last_digit);
}
