#include "holberton.h"

/**
 * print_number - print number given by parameter
 * @n: number to be printed
 *
 * Return: None
 */
void print_number(int n)
{
	unsigned int numpos, cant, c_var, c_var2, n_dig, num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	numpos = n;
	c_var = numpos;
	c_var2 = numpos;
	cant = 1;
	n_dig = 0;

	if (numpos > 9)
	{
		while ((c_var / 10) > 0)
		{
			cant = cant * 10;
			c_var = c_var / 10;
			n_dig += 1;
		}
		for (num = 0; num <= n_dig; num++)
		{
			_putchar((c_var2 / cant) + '0');
			c_var2 = c_var2 % cant;
			cant = cant / 10;
		}
	}
	else
	{
		_putchar((numpos % 10) + '0');
	}
}
