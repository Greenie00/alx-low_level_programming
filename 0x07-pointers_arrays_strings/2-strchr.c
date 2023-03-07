#include "main.h"
#include <stdio.h>


/**
 * _strchr - Locating a character
 *
 * @s: First argument
 * @c: Second argument
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + 1);
		i++;
	}

	return (NULL);
}
