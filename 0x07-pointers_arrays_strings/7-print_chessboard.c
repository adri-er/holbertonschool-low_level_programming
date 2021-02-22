#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard.
 * @a: row size.
 *
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
	int i, j, rows;

	rows = sizeof(a);
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
