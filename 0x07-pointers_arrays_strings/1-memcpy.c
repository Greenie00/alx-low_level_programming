#include "main.h"

/**
 * _memcpy - Copy block of memory
 *
 * @dest: First argument
 * @src: Second argument
 * @n: Third argument
 *
 * Return: Return result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src [i];
		i++;
	}

	return (dest);
}
