#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string to get appended.
 * @src: source string to append.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *end_dest;

	end_dest = dest;
	while (*end_dest != '\0')
	{
		end_dest++;
	}
	while (*src != '\0')
	{
		*end_dest = *src;
		end_dest++;
		src++;
	}
	return (dest);
}
