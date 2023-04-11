#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Setting
 *
 * @n: First arg
 * @index: Second arg
 *
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ptr;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	ptr = *n;
       
	ptr ^= (1 << index);
	return (1);
}
