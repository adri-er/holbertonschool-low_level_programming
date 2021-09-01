#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for value using jump search algo
 * @array: sorted array of integers.
 * @size: size of the array.
 * @value: value to search in the array.
 *
 * Return: integer of the position the value is in, or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int i = 0, j, l_bound, u_bound;

	if (array == NULL)
		return (-1);

	while (i <= step)
	{
		l_bound = i * step;
		u_bound = (i + 1) * step;
		printf("Value checked array[%d] = [%d]\n", l_bound, array[l_bound]);
		if (array[l_bound] <= value && array[u_bound] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", l_bound, u_bound);
			break;
		}
		i++;
	}
	if (i > step)
		return (-1);

	for (j = l_bound; j <= u_bound && j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
