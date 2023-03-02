#include "main.h"

/**
 * *cap_string - Make strings Capital letters
 *
 * @str: Argument
 * Result: Returns strings in capital leteres
 */

char *cap_string(char *str)
{
	int index;

	index = 0;

	while (str[index])
	{
		while (!str[index] >= 'a' && str[index] <= 'z')
		index++;

		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
		str[index] -= 32;
		index++;
	}

	return (str);
}
