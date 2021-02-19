#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @string: string to turn in uppercase.
 * Return: uppercase of the string.
 */
char *string_toupper(char *string)
{
	int i = 0;

	for (; string[i]; i++)
	{
		if (string[i] <= 122 && string[i] >= 97)
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
