#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fli_bits - Flip the switch
 *
 * @n: First argument
 * @m: Secong arg
 *
 * Return: bit_size
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int bit_size;

	i = n ^ m;
	bit_size = 0;

	while (i > 0)
	{
		bit_size = bit_size + (i & 1);
		i >>= 1;
	}
	return (bit_size);
}
