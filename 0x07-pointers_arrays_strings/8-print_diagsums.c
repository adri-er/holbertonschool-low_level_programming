#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the diagonals.
 * @a: matrix in memory as arrays. 
 * @size: size of each array.
 *
 * Return: None.
 */
void print_diagsums(int *a, int size)
{
	int n, sum = 0;
	int sum2 = 0;
	int d1 = 0;
	int d2 = (size - 1);

	for (n = 0; n < size; n++)
	{
 		sum += a[d1];
		sum2 += a[d2];
		d1 += (1 + size);
		d2 += (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
