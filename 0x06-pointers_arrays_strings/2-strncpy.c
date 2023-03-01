#include "main.h"

/**
 * *_strncpy - Cpy string
 *
 * @dest: Argument
 * @src: Argument
 * @n: Argument
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int len_of_src = 0;

	while(src[index++])
	{
		len_of_src++;
	}

	for (for index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = len_of_src)
	{
		dest[index] = '\0';
	}

	return (dest)
}
		
