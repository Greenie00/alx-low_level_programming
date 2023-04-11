#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * (8))
		return (-1);

	ptr = *n;
       
	*n ^= (1 << index);
	return (1);
}
