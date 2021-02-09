#include <stdio.h>
#include "holberton.h"

/**
 *print_sign - Print the sign of a number
 *@n: The number you want to see its sign
 *
 *Return: 1 if positive, 0 if its zero and -1 if negative.
 */
int print_sign(int n)
{
	int rsp;

	if (n > 0)
	{
		_putchar('+');
		rsp = 1;
	}
	else if (n == 0)
	{
		rsp = 0;
		_putchar('0');
	}
	else
	{
		rsp = -1;
		_putchar('-');
	}
	return (rsp);
}
