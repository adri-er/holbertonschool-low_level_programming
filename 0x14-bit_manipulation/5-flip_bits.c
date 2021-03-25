#include "holberton.h"

/**
 * flip_bits - determines number of bits to flip to
 * get from one number to another.
 * @n: Original number.
 * @m: Number to change to.
 *
 * Return: Numbers to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int length_n = 0, length_m = 0, flip = 0;
	long int maximum = 0;

	while (n >> length_n && length_n < 64)
	{
		length_n++;
	}
	while (m >> length_m && length_m < 64)
	{
		length_m++;
	}
	maximum = length_n - 1;
	length_m--;
	if (length_m >= length_n)
	{
		maximum = length_m;
	}
	while (maximum >= 0)
	{
		if (get_bit(n, maximum) != get_bit(m, maximum))
		{
			flip++;
		}
		maximum--;
	}
	return (flip);
}

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get its bit.
 * @index: index, starting from 0 of the bit you want to get.
 *
 * Return: value of bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{

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
