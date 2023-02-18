#include <stdio.h>

/**
 * main - Print alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
