#include <stdio.h>

/**
 * _strlen - Retuens string length of character
 *
 * @s: Argument
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length_of_s = 0;

	while (*s++)
	{
		length_of_s++;
	}
	return (length_of_s);
}
