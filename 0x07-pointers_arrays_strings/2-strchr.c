#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: String s to find ocurrence of c.
 * @c: character that ocurrence is looked for.
 *
 * Return: pointer to the first character c.
 */
char *_strchr(char *s, char c)
{
	int index, len = 0;

	for (; len != '\0'; len++)
	{
	}
	len++;

	for (; s[index]; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return (s + len);
}
