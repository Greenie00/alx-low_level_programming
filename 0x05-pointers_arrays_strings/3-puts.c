#include "main.h"

/**
 * _puts - Prints a string
 * @str: Argument for string
 *
 * Return: A string
 */

int _puts(char *str)
{
	for (; *str != 0; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
