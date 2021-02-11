#include "holberton.h"
#include <stdlib.h>

/**
 *add_multiples - sum of all the multiples of 3 or 5 below 1024 (excluded).
 *
 *Return: None.
 */
void add_multiples(void)
{
	int i, suma, c_var, c_var2, n_dig, cant, n;

	suma = 0;
	cant=1;
	n_dig=0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 ==0))
		{
			suma += i;
		}
	}
	c_var=suma;
	c_var2=suma;
	while (abs(c_var / 10) > 0)
	{
		cant = cant * 10;
		c_var = c_var / 10;
		n_dig += 1;
	}
	for (n = 0; n <= n_dig; n++)
	{
		_putchar(abs(c_var2 / cant) + '0');
		c_var2 = c_var2 % cant;
		cant = cant / 10;
	}
	_putchar('\n');
}
