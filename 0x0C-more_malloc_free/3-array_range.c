#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers.
 * @min: minimum value it should include.
 * @max: maximum value it should include.
 *
 * Return: NULL on failure or pointer to array.
 */
int *array_range(int min, int max)
{
	int index;
	int size;
	int *memory;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min + 1);
	memory = malloc(sizeof(int) * (size));
	if (memory == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		memory[index] = min + index;
	}
	return (memory);
}
