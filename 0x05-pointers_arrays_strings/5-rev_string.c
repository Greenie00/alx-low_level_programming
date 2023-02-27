

/**
 * rev_string - Reverse string
 *
 * @s: Argument
 *
 * Return: Reverse string
 */

void rev_string(char *s)
{
	int x = 0;
	int y =0;

	while (s[x++])
	{
		y++;
	}

	for (y = x - 1; y >= x / 2; y--)
	{
		s[y] = s[x - y - 1];
		s[x - y - 1] = g;
	}
}
