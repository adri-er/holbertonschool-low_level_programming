#include "search_algos.h"

/**
 * linear_search - searches for a value using linear search alg.
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: integer to seacr for.
 *
 * Return: first index where value is located, or -1 if not present.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int position = -1;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			position = index;
			break;
		}
	}
	return (position);
}
