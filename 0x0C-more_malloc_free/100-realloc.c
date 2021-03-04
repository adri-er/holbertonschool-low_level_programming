#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocatesmemory block using maloc and free.
 * @ptr: ponter to the memory.
 * @old_size: size allocated por ptr.
 * @new_size: new size of memory in bytes.
 *
 * Return: pointer to new memory allocation.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int index;
	char *memory;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	memory = malloc(new_size);
	if (memory == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (memory);
	}
	for (index = 0; index < old_size; index++)
	{
		memory[index] = *((char *)ptr + index);
	}
	free(ptr);
	return (memory);
}
