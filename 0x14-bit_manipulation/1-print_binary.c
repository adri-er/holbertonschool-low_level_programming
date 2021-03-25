#include "holberton.h"

/**
 * print_binary - print the binary of a decimal number.
 * @n: number to convert to binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	unsigned int index = 0, copy = n;
	int length = 0;

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
		if (((copy >> length) ^ 1) == ((copy >> length) + 1))
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		length--;
	}
}
