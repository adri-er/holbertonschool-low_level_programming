#include "holberton.h"
#include <stdio.h>

int prime(int a);

/**
 * main - print larger prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int numero, i, resp;

	numero = 612852475143;
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			if ((prime(i) == 1))
			{
				resp = i;
			}
		}
	}
	printf("%ld", resp);
	printf("\n");
	return (0);
}

/**
 * prime - verifies if a number is prime.
 * @a: number to check if its prime.
 * Return: if not returns 0, if it is return 1.
 */
int prime(int a)
{
	long int index;

	for (index = 2; index < a; index++)
	{
		if (a % index == 0)
		{
			return (0);
		}
	}
	return (1);
}
