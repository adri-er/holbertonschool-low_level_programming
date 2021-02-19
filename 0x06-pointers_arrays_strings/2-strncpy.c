#include "holberton.h"

/**
 * _strncpy - copies a string.
 * @dest: destiny to be copied.
 * @src: from where it should be copied.
 * @n: number of characters to be copied.
 *
 * Return: The copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
