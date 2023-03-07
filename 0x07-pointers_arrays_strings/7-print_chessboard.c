#include "main.h"

/**
 * print_chessboard - Prints chess board from 2d array
 *
 *
 * @a: Argument
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	for (; x < 8; x++)
	{
		for  (; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
