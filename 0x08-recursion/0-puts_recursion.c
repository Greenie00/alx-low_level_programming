#include "main.h"

/**
 * _puts_recursion - prints string followed by a new line
 * @s: argument string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return (0);
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
