#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size : size of the triangle
 *
 * Return : None
 */
void print_triangle(int size)
{
	int fila, sim, esp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (fila = 1; fila <= size; fila++)
	{
		for (esp = size - fila; esp > 0; esp--)
		{
			_putchar(' ');
		}
		for (sim = fila; sim > 0; sim--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
