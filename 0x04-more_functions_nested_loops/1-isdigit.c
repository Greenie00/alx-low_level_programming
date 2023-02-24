#include "main.h"

/**
 * _isdigit - prints a digit between 0-9
 *
 * @c: argument passed in isdigit
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 57)
	{
		return (1);
	}
	return (0);
}
