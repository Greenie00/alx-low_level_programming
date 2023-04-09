#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read a txt file
 *
 * @filename: First arg
 * @letters: Second arg
 *
 * Return: txt file
 */

ssize_t read_textfile(const char *filename,
	       	size_t letters)
{
	char *fp_ptr;
	int x;
	ssize_t sp_1;
	ssize_t sp_2;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);
	fp_ptr = malloc(sizeof(char) * letters);

	if (!fp_ptr)
		return (0);

	sp_1 = read(x, fp_ptr, letters);

	sp_2 = write(1, fp_ptr, sp_1);

	close(x);
	free(fp_ptr);

	return (sp_2);
}	
