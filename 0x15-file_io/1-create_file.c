#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Create a file
 *
 * @filename: first arg
 * @text_content: second arg
 *
 * Return: always 0
 */

int create_file(const char *filename,
		char *text_content)
{
	int no_of_let, fp_ptr, x;

	if (filename == NULL)
		return (-1);
	fp_ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fp_ptr == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (no_of_let = 0; text_content[no_of_let]; no_of_let++)
		continue;

	x = write(fp_ptr, text_content, no_of_let);
	if (x == -1)
		return (-1);

	close(fp_ptr);
	return (1);
}
