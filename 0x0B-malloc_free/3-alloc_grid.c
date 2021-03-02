#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array of integers done.
 * @height: height of the array of integers.
 *
 * Return: NULL on failure or if w and h are 0 or pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int index, index_j;
	int **memory;

	memory = (int **)malloc(sizeof(int *) * height);
	if (memory == NULL || width == 0 || height == 0)
	{
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		memory[index] = (int *)malloc(sizeof(int) * width);
	}

	for (index = 0; index < height; index++)
	{
		for (index_j = 0; index_j < width; index_j++)
		{
			memory[index][index_j] = 0;
		}
	}
	return (memory);
}
