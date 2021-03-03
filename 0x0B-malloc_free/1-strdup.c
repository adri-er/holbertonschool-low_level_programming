#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to copy of a string given.
 * @str: string thats going to be copied in memory.
 *
 * Return: pointer to space in memory with copied string.
 */
char *_strdup(char *str)
{
	char *memory;
	int index, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	length++;
	memory = malloc(length * sizeof(char));
	if (memory != NULL)
	{
		for (index = 0; index <= length; index++)
		{
			memory[index] = str[index];
		}
	}
	else
	{
		return (NULL);
	}
	return (memory);
}
