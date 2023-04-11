#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *
 */

int append_text_to_file(const char *filename,
		char *text_content)
{
	int fp_ptr, no_of_let, x;

	if  (filename == NULL)
		return (-1);
	fp_ptr = open(filename, O_WRONLY | O_APPEND);

	if (fp_ptr == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (no_of_let = 0; text_content[no_of_let]; no_of_let++)
			;
		x = write(fp_ptr, text_content, no_of_let);
		if (x == -1)
			return (-1);
	}

	close(fp_ptr);

	return (1);
}
