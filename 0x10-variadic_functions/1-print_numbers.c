#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions"

/**
 * print_numbers - Print numbers
 *
 * @separator: arg
 * @n: arg
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;

	va_start(list, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(list, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(list)
}
