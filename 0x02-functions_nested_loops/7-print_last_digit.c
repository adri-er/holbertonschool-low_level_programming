#include "holberton.h"
#include <stdlib.h>

/**
 *print_last_digit - Print the sign of a number.
 *@n: The number you want to know the last digit.
 *
 *Return: Value of last digit.
 */
int print_last_digit(int n)
{
	int rsp;

	rsp = abs(n % 10);
	_putchar(rsp + '0');

	return (rsp);
}
