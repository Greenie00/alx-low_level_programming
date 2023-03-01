#include "main.h"

/**
 * *_strncat - Concantenarion
 *
 * @dest: Argument
 * @src: Argiment
 * @n: Argument
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int len_of_dest = 0;

	while (dest[index++])
	{
		len_of_dest++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[len_of_dest++] = src[index];
	}
	return (dest);
}
