#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Returns: None
 */
void more_numbers(void)
{
	int num, cant;

	cant = 0;
	while (cant < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		cant++;
		_putchar('\n');
	}
}
