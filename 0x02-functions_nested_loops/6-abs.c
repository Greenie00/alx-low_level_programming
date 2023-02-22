#include "main.h"

/**
 * _abs - Absolute value
 * g: Arguement in _abs
 * Return: Returns the absolute value 
 */

int _abs(int g)
{
	if (g < 0)
	{
		int absolute_val;

		absolute_val = g * -1;
		return (absolute_val);
	}
	return (g);
}
