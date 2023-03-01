#include "main.h"
#include <stdio.h>

/**
 * *_strcat - String concayrnation
 *
 * @dest: First argument
 * @src: Second Argument
 *
 * Return: concantanated string
 */

char *_strcat(char *dest, char *src)
{
	int stlen = 0;
	int i;

	while (dest[stlen])
	{
		stlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[stlen] = src[i];
		stlen++;
	}
	dest[stlen] = '\0';
	return (dest);
}
