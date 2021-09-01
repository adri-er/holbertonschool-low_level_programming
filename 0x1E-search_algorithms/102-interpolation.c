#include "search_algos.h"

/**
 * interpolation_search - searches for a value interpolating.
 * @array: Array of integers.
 * @size: Size of array.
 * @value: Value to search for.
 *
 * Return: Integer of first position with desired value, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	pos = low +
		(((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));

	if (value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			return (interpolation_search(array + pos, size - pos, value));

		if (array[pos] > value)
			return (interpolation_search(array, size - pos, value));
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	return (-1);
}
