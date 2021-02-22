#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes..
 * @s: Initial segment.
 * @accept: bytes accepted for the return.
 *
 * Return: pointer to the byte that matches fisrt.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int counter = 0;
	unsigned int ch_counter = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		ch_counter = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ch_counter++;
				break;
			}
		}
		if (ch_counter == 0)
		{
			counter++;
		}
		else
		{
			break;
		}
	}
	if (counter > 0)
	{
		return (s + counter);
	}
	else
	{
		return (NULL);
	}
}
