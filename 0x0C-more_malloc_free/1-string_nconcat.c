#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: bytes from s2 to copy.
 *
 * Return: pointer to space in memory with concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	unsigned int index, len_t, len_s1, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1]; len_s1++)
	{
	}
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{
	}
	if (len_s2 > n)
	{
		len_t = len_s1 + n + 1;
		memory = malloc(sizeof(char) * len_t);
	}
	else
	{
		len_t = len_s1 + len_s2 + 1;
		memory = malloc(sizeof(char) * len_t);
	}
	if (memory == NULL)
		return (NULL);
	len_t--;
	for (index = 0; index < len_t; index++)
	{
		if (index < len_s1)
		{
			memory[index] = s1[index];
		}
		else
		{
			memory[index] = s2[index - len_s1];
		}
	}
	memory[index + 1] = '\0';
	return (memory);
}
