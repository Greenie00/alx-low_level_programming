#include "main.h"

/**
 * *string_toupper - Convert strings from lower to upper case
 *
 * @x: 
 * Return: 0
 */

char *string_toupper(char *x)
{
	int index = 0;

	while (x[index])
	{
		if (x[index] >= 'a' & x[index] <= 'z')
		{
			x[index] -= 32;
			index++;
		}

	return (x);
	
	}
}
