#include "holberton.h"

/**
 *times_table - Print times tables of 9 digits
 *
 *Return: None.
 */
void print_times_table(int n)
{
	int n1, n2, prod, cant, i;
	char[] prodc;

	for (n1 = 0; n1 <= n; n1++)
	{
		cant=0;
		for (n2 = 0; n2 <= 3; n2++)
		{
			prod = n1 * n2;
			char = prodc
			while (prod / 10 != 0)
			{
				cant+=1;
			}
			for (i = 0; i <= cant; i++)
			{
				_putchar(prod[i])
			}
			if ((prod / 10 == 0) && n2 != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(' ');
			if (prod / 10 == 0)
			{
				_putchar(prod % 10 + '0');
			}
			if (n2 != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
