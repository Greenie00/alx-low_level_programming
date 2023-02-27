#include "main.h"

/**
 * _puts - Prints a string
 * @str: Argument for string
 *
 * Return: A string
 */

_puts(char *str)
{
	for (; *str != 0; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
