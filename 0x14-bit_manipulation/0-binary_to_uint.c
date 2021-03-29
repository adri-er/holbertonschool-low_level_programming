#include "holberton.h"

/**
 * binary_to_uint - converts binary number to unsigned integer.
 * @b: pointer to string with binary number.
 *
 * Return: decimal number of the binary.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, index = 0, length = 0;

	if (!b)
	{
		return (ans);
	}
	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (ans);
		}
		index++;
	}
	length = index - 1;
	index = 0;
	while (b[index])
	{
		ans += (b[length] - '0') << index;
		length--;
		index++;
	}
	return (ans);
}
