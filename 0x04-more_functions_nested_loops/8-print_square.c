#include "holberton.h"

/**
 * print_square - prints a square
 * @size : size of the square
 *
 * Return: None
 */
void print_square(int size)
{
	int fila, colum;

	if (size > 0)
	{
		fila = 0;
		while (fila < size)
		{
			colum = 0;
			while (colum < size)
			{
				_putchar('#');
				colum++;
			}
			fila++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
