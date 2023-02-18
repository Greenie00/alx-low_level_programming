#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int g = 0;

	while (g <= 9)
	{
		printf("%d", g);
		g = g + 1;
	}
	putchar('\n');
	return (0);
}
