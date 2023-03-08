#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: Argument
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	for (*s == '\0')
	{
		return;	
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_print_rev_recursion(*s);;
}

