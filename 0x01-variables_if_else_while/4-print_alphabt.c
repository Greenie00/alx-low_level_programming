#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		if ((g != 'e' && g != 'q') && g <= 'z')
			putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
