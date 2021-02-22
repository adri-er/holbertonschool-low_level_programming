#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area to be copied.
 * @src: memory area from where to copy.
 * @n: bytes to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	for (; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
