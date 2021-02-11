#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n:number of times the character _ should be printed.
 *
 * Return: None
 */
void print_line(int n)
{
	int cant;

	cant = 0;
	while (cant < n)
	{
		_putchar('_');
		cant++;
	}
	_putchar('\n');
}
