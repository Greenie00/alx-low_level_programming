#include "function_pointers.h"

/**
 * print_name - Prints name
 *
 * @name: Arg
 * @f: arg
 *
 * Return: NAme
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
