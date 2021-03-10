#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as a parameter.
 * @array: pointer to the array of interest.
 * @size: size of the array.
 * @action: a pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (size <= 0 || array == NULL)
	{
		return;
	}
	if (action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
