#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get its bit.
 * @index: index, starting from 0 of the bit you want to get.
 *
 * Return: value of bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int length = 0;

	if ((n == 0 || n == 1) && index == 0)
	{
		return (n);
	}
	while (n >> length)
	{
		length++;
	}
	if (index > (length - 1))
	{
		return (-1);
	}
	if (((n >> index) ^ 1) == ((n >> index) + 1))
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
