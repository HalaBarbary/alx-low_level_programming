#include "main.h"
/**
 * print_chessboard - prints characters as a chess board
 * @a: a pointer to an array of characters
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x <8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
