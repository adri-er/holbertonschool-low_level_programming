#include "holberton.h"
#include <stdlib.h>

/**
 * print_number - print number given by parameter
 * @n: number to be printed
 *
 * Return: None
 */
void print_number(int n)
{
	int cant, c_var, c_var2, n_dig, num;

	c_var = n;
	c_var2 = n;
	cant = 1;
	n_dig = 0;
	if (n < 0)
	{
		_putchar('-');
	}
	if (abs(n) > 9)
	{
		while (abs(c_var / 10) > 0)
		{
			cant = cant * 10;
			c_var = c_var / 10;
			n_dig += 1;
		}
		for (num = 0; num <= n_dig; num++)
		{
			_putchar(abs(c_var2 / cant) + '0');
			c_var2 = c_var2 % cant;
			cant = cant / 10;
		}
	}
	else
	{
		_putchar(abs(n % 10) + '0');
	}
}