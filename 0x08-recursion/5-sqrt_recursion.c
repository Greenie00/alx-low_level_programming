#include "main.h"

/**
 * _sqrt_recursion - V
 *
 * @n: Argument
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int i = 0;
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == 0)
	{
		return (i);
	}

	return (_sqrt_recursion(n, i + 1));
}
