#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: pointer to allocated space in memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	memset(memory, 0, nmemb*size);
	return (memory);
}
