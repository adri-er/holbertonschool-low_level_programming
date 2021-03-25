#include "holberton.h"

/**
 * print_binary - print the binary of a decimal number.
 * @n: number to convert to binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	long int length = 0;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	while (n >> length)
	{
		length++;
	}
	length--;
	while (length != 0)
	{
		if (((n >> length) ^ 1) == ((n >> length) + 1))
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
