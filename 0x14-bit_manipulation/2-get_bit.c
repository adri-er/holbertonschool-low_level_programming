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

	if (index > 63)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
