#include "main.h"

/**
 * *_memset - Creating  a replica
 *
 * @s: First argument
 * @b: Seconf argument
 * @n: third argument
 *
 * Result: Copies contents of b into s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
