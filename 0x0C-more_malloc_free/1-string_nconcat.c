#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concantenation
 *
 * @s1: First argument
 * @s2: Second argument
 * @n: Third argument
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = NULL;

	while (s1[i])
		i++;

	while (s1[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];
		if (j >= i)
		{
			str[j] = s1[k];
			k++;
		}
		j++;
	}

	str[j] = '\0';
	return (str);
}