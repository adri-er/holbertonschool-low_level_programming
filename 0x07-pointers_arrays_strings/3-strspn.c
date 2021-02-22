#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: Initial segment.
 * @accept: bytes accepted for the return.
 *
 * Return: number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ch_counter = 0;
	unsigned int counter = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		ch_counter = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ch_counter++;
			}
		}
		if (ch_counter == 0)
		{
			break;
		}
		else
		{
			counter++;
		}
	}
	return (counter);
}
