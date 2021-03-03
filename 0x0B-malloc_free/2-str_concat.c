B#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: String to concatenate.
 * @s2: String to be concatenated.
 *
 * Return: newly allocated space in memory of concatenated.
 */
char *str_concat(char *s1, char *s2)
{
	int index_s1, index_s2, len_s1 = 0, len_s2 = 0;
	char *memory;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1])
	{
		len_s1++;
	}
	while (s2[len_s2])
	{
		len_s2++;
	}
	memory = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (memory == NULL)
	{
		return (NULL);
	}
	for (index_s1 = 0; index_s1 < len_s1; index_s1++)
	{
		memory[index_s1] = s1[index_s1];
	}
	for (index_s2 = 0; index_s2 < len_s2 ; index_s2++)
	{
		memory[index_s1 + index_s2] = s2[index_s2];
	}
	memory[index_s1 + index_s2] = '\0';
	return (memory);
}
