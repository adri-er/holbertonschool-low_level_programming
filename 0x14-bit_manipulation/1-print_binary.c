#include "holberton.h"

/**
 * print_binary - print the binary of a decimal number.
 * @n: number to convert to binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy = n;
	long int length = 0;
	long int index = 0;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	while (copy >> index)
	{
		index++;
	}
	length = index - 1;
	while (length >= 0)
	{
		if (((copy >> length) & 1))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		length--;
	}
}
