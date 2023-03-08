#include "main.h"

/**
 * print_chessboard - Prints chess board from 2d array
 *
 *
 * @a: Argument
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for  (x = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
