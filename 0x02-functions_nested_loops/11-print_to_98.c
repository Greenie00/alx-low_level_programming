#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - PRint numbers upward or downward to 98
 *
 * @n: Argument
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}

			else
			{
				printf("%d, ", n);
			}
		}
	}

	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}

			else
			{
				printf("%d, ", n);
			}
		}
	}
}