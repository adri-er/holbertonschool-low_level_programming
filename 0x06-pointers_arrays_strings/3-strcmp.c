#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: string to be compared.
 * @s2: string used to compare.
 *
 * Return: 0 - identical, negative or positive depending
 * of unmatched character.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			break;
		}
		i++;
	}
	return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
}
