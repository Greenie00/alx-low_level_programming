#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int g = 0;

	while (g <= 9)
	{
		putchar(g + '0');
		g++;
	}
	putchar('\n');
	return (0);
}	
