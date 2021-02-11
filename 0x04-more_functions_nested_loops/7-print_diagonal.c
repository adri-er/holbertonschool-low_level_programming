#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times the character \ should be printed
 *
 * Return : None
 */
void print_diagonal(int n)
{
	int cant, esp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (cant = 0; cant < n; cant++)
	{
		for (esp = 1; esp <= cant; esp++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
