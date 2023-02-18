#include <stdio.h>

/**
 * main - Print alphabets capital
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char g = 'A';
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (g <= 'Z')
	{
		putchar(g);
		g++;
	}
	putchar('\n')
	return (0)
}
