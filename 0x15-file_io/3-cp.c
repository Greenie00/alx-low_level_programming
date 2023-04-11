#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * file_error - will files open
 *
 * @file_from: First arg
 * @file_to: Second arg
 * @argv: Third argv
 *
 * Return: Always 0
 */

void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code for studients
 *
 * @argc: First arg
 * @argv: Second arg
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int err_close, file_to;
	int file_from, err_close_1;
	ssize_t no_of_chars, x;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage:cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 644);

	file_error(file_from, file_to, argv);
	no_of_chars = 1024;
	while (no_of_chars == 1024)
	{
		no_of_chars = read(file_from, buf, 1024);
		if (no_of_chars == -1)
			file_error(-1, 0, argv);
		x = write(file_to, buf, no_of_chars);
		if (x == -1)
			file_error(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close_1 = close(file_to);
	if (err_close_1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
