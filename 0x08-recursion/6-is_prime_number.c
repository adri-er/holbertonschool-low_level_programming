#include "holberton.h"

/**
 * is_prime - determines if number is prime or not.
 * @n: numer to check if its prime.
 * @i: index that checks divisibility.
 *
 * Return: 1 if its prime, 0 if not.
 */
int is_prime(int n, int i)
{
	if (n % i != 0)
	{
		if (i > 2)
		{
			return (is_prime(n, i - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}


/**
 * is_prime_number - determines if number is prime or not.
 * @n: numer to check if its prime.
 *
 * Return: 1 if its prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (is_prime(n, ((n / 2) - 1)));
	}
	else
	{
		return (0);
	}
}
