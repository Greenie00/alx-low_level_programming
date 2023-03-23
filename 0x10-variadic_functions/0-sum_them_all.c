#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsignned int i;
	int sum;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0, i < n, i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
