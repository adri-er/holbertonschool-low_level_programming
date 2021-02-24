#include "holberton.h"

/**
 * factorial - calculates factorial of a number.
 * @n: number to calculate factorial.
 *
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
