#include "main.h"

/**
 * main - print alphabets
 *
 * Result: return 0
 */

void print_alphabet(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'c'; alphab++)
		_putchar(alphab);

	_putchar('\n');
}
