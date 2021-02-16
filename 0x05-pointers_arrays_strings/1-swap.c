#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: pointer to an integer.
 * @b: pointer to another integer.
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int v1, v2;

	v1 = *a;
	v2 = *b;
	*a = v2;
	*b = v1;
}
