#include <stdio.h>

/**
 * main - a program that prints arguments it receives
 *
 * @argc: Firsst argument
 * @argv: Second argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
