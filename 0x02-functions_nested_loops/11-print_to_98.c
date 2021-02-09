#include "holberton.h"
#include <stdlib.h>


/**
 *print_format - prints desired format.
 *@index: first number to add.
 *
 *Return: None.
 */
void print_format(int index)
{
	int cant, c_var, c_var2;

	c_var = index;
	c_var2 = index;
	cant = 1;
	if (index < 0)
	{
		_putchar('-');
	}
	if (abs(index) > 9)
	{
		while (abs(c_var / 10) > 0)
		{
			cant = cant * 10;
			c_var = c_var / 10;
		}
		while (abs(c_var2 / 10) > 0)
		{
			_putchar(abs(c_var2 / cant) + '0');
			c_var2 = c_var2 % cant;
			cant = cant / 10;
		}
		_putchar(c_var2 + '0');
	}
	else
	{
		_putchar(abs(index % 10) + '0');
	}
	if (index != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}


/**
 *print_to_98 - print a number until it reaches 98.
 *@n: starting point.
 *
 *Return: None.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_format(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_format(i);
		}
	}
	_putchar('\n');
}
