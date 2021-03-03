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
	int index;

	if (str == NULL)
	{
		return (NULL);
	}
	memory = (char *)malloc(sizeof(str) + 1);
	if (memory != NULL)
	{
		for (index = 0; str[index]; index++)
		{
			memory[index] = str[index];
		}
		memory[index + 1] = '\0';
	}
	return (memory);
}
