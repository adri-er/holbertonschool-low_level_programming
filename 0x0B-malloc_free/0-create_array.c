#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it.
 * @size: size of the array.
 * @c: char to initialize.
 *
 * Return: NULL if size = 0 or fails or pointer array.
 */
char *create_array(unsigned int size, char c)
{
	char *memory;
	unsigned int index;

	if (size == 0)
	{
		memory = NULL;
	}
	else
	{
		memory = (char *)malloc(size * sizeof(char));
		if (memory == NULL)
		{
			return (NULL);
		}
		for (index = 0; index < size; index++)
		{
			memory[index] = c;
		}
	}
	return (memory);
}
