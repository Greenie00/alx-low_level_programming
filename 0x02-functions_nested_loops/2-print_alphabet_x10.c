#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Result: 0
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char alphab;

	while (x < 10)
	{
		
		for (alphab = 'a'; alphab <= 'z'; alphab++)
			_putchar(alphab);

		_putchar('\n');
	}
}
