#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: main string.
 * @needle: substring to be in main string.
 *
 * Return: pointer to the beginnin located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, coinc, len;

	for (len = 0; needle[len] != '\0'; len++)
	{
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			coinc = 0;
			for (j = 0; (haystack[i + j] == needle[j]) && (haystack[i + j] != '\0'); j++)
			{
				coinc++;
				if (coinc == len)
				{
					return (haystack + i);
				}
			}
		}
	}
	return (NULL);
}
