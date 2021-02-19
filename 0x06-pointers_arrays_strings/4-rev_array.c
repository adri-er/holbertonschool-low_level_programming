#include "holberton.h"

/**
 * reverse_array - reverses an array of integers.
 * @a: array of integers.
 * @n: number of elements of the array.
 *
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i, temp, half;

	half = n / 2;
	n--;
	for (i = 0; i < half; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
