#include "holberton.h"

/**
 * _memset - Fills memory with constant byte.
 * @s: pointer to memory area.
 * @b: constant byte to fill with.
 * @n: n bytes of memory to be filled.
 *
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
