#include "main.h"

/**
 * _atoi - Converts strings to integers
 *
 * @s: Argument
 * Return: 0
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int min = 1;
	int l = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			l = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (l == 1)
		{
			break;
		}
		c++;
	}
	n *= min;
	return (n);
}
