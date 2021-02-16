#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 *
 * Return: none
 */
void rev_string(char *s)
{
	int index, index2, counter;
	char *begin, *end, temporary;

	index = 0;
	counter = 0;
	begin = s;
	end = s;
	while (s[index] != '\0')
	{
		counter++;
		index++;
	}

	for (index2 = 0; index2 < counter - 1; index2++)
	{
		end++;
	}

	for (index2 = 0; index2 < index / 2; index2++)
	{
		temporary = *end;
		*end = *begin;
		*begin = temporary;

		begin++;
		end--;
	}
}
