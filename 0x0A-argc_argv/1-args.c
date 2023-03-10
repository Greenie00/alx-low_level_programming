#include <stdio.h>

/**
 * main - Get argument count
 *
 * @argc: first argument
 * @argv: Secomd argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int val;
	(void) argv;
	
	val = argc;
	
	printf("%d", val - 1);
	return (0);
}
