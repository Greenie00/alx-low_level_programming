#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - conversion of binary
 *
 * @b: Arg
 * Return: always 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int x;

	val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);

		val = val + (b[x] - '0') * 2;
	}

	return (val);
}
