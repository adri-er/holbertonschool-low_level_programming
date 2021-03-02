#include "holberton.h"
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
	int index_s1, index_s2;
	char *memory;

	memory = (char *)malloc(sizeof(s1) + sizeof(s2) - 1);
	if (memory == NULL)
	{
		return (NULL);
	}
	for (index_s1 = 0; s1[index_s1]; index_s1++)
	{
		memory[index_s1] = s1[index_s1];
	}
	for (index_s2 = 0; s2[index_s2]; index_s2++)
	{
		memory[index_s1 + index_s2] = s2[index_s2];
	}
	memory[index_s1 + index_s2] = '\0';
	return (memory);
}
