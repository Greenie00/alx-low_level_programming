#include "main.h"

/**
 * _strcmp - Compare strings
 *
 * @s1: Argument
 * @s2: Argument
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
