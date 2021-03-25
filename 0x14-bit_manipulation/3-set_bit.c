#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number to add index.
 * @index: index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if worked, -1 if there was an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (get_bit(*n, index) == 0)
	{
		*n = *n + (1 << index);
		return (1);
	}
	return (-1);
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
	unsigned int length = 0;

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
