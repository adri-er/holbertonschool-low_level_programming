#include "holberton.h"

/**
 * _strncat - concatenates two strings until n bytes.
 * @dest: destination string to get appended.
 * @src: source string to append.
 * @n: number of bytes allowed.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end_dest;
	int b_count = 0;

	end_dest = dest;
	while (*end_dest != '\0')
	{
		end_dest++;
	}
	while (*src != '\0' && b_count < n)
	{
		*end_dest = *src;
		end_dest++;
		src++;
		b_count++;
	}
	return (dest);
}
