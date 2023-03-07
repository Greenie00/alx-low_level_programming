#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: First arvument
 * @accept: Second argument
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
				return (s + 1);
		}
	}

	return (NULL);
}
