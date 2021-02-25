#include "holberton.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @num: number to calculate square root.
 * @count: number to evaluate if its the root.
 *
 * Return: square root of a number or -1 if it doesn´t have.
 */
int _sqrt(int num, int count)
{
	if (count * count != num)
	{
		if (count < num)
		{
			return (_sqrt(num, count + 1));
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (count);
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate square root.
 *
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
