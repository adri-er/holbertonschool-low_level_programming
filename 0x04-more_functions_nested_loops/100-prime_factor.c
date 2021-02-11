#include "holberton.h"
#include <stdio.h>

/**
 * main - print larger prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, resp, numero, contador;

	numero = 612852475143;
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			contador = 0;
			for (j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					contador++;
				}
			}
			if (contador == 0)
			{
				resp = i;
			}
		}
	}
	printf("%ld", resp);
	printf("\n");
	return (0);
}
