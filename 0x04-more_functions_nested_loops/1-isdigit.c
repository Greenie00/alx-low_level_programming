#include "main.h"

/**
 * _isdigit - prints a digit between 0-9
 *
 * @c: argument passed in isdigit
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	else if (c < 0 || c > 9)
	{
		return (0);
	}

	else
	{
		return (0);
	}
}
