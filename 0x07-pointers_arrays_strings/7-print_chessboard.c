#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j, size;

	size = 8;
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
