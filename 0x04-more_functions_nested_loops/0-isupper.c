#include "main.h"

/**
 * _isupper - Finding upper integer
 *
 * @c: argument for _isupper
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
