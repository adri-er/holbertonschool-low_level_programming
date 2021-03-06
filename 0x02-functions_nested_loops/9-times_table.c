#include "holberton.h"

/**
 *times_table - Print times tables of 9 digits
 *
 *Return: None.
 */
void times_table(void)
{
	int n1, n2, prod;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			prod = n1 * n2;
			if (prod / 10 != 0)
			{
				_putchar(prod / 10 + '0');
			}
			else if ((prod / 10 == 0) && n2 != 0)
			{
				_putchar(' ');
			}
			_putchar(prod % 10 + '0');
			if (n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
