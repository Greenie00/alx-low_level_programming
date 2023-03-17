#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - Check malloc
 *
 * @b: Argument
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
