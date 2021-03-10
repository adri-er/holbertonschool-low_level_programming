#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to an array to serach in.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: No matches or size<=0, -1; matches, index of first match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
