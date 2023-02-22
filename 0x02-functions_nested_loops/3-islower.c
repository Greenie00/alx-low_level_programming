#include "main.h"

/**
 * _islower - Checks for lowercasecharacters
 *
 * @c: is argument taken by _islower function
 *
 * Return: 1 for lowercase characters and 0 for anything else
 */

int _islower(int c)
{

	if ((c >= 'a') && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	return (0);
}
