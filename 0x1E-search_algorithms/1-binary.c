#include "search_algos.h"

/**
 * binary_search - searches for value in a sorted array using binary search.
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: integer to seacr for.
 *
 * Return: first index where value is located, or -1 if not present.
 */
int binary_search(int *array, size_t size, int value)
{
	int pos_divide;

	if (array == NULL)
		return -1;

	pos_divide = size / 2;
	if (pos_divide == 0)
	{
		if (array[pos_divide] == value)
			return (pos_divide);
		else
			return (-1);
	}
	else if (array[pos_divide] < value)
	{
		print_array(array, size);
		if (size % 2 == 0)
			return (binary_search(array + pos_divide, pos_divide, value));
		else
			return (binary_search(array + pos_divide + 1, pos_divide, value));
	}
	else if (array[pos_divide] > value)
	{
		print_array(array, size);
		return (binary_search(array, pos_divide, value));
	}
	else
	{
		print_array(array, size);
		return (binary_search(array + pos_divide, pos_divide, value));
	}
	return (-1);
}

/**
 * print_array - Prints an array.
 * @array: pointer to array to print.
 * @size: size of the array.
 *
 * Return: None.
 */
void print_array(int *array, size_t size)
{
	size_t index = 0;

	printf("Searching in array: ");
	while (index < size)
	{
		if (index == size - 1)
			printf("%d\n", array[index]);

		else
			printf("%d, ", array[index]);
		index++;
	}
}
