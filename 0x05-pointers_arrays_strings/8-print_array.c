#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers.
 * @a: pointer of the string thats going to be cut.
 * @n: number of elements of the array to be printed.
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
