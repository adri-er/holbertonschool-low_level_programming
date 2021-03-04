#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: pointer to allocated space in memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int index;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		memory[index] = 0;
	}
	return (memory);
}
