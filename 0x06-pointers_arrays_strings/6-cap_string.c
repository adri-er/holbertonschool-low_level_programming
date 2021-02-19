#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @stg: string thats capitalized.
 *
 * Return: Capitalized string.
 */
char *cap_string(char *stg)
{
	int i = 0;
	int j, pos;
	char sep[] = {44, 9, 59, 10, 123, 32, 46, 33, 63, 92, 41, 40, 125, 34};

	for (; stg[i] != '\0'; i++)
	{
		for (j = 0; j < 16; j++)
		{
			if (stg[i] == sep[j] && stg[i + 1] > 96 && stg[i + 1] < 123)
			{
				pos = i + 1;
				stg[pos] = stg[pos] - 32;
				if (stg[i] == '\t')
				{
					stg[i] = ' ';
				}
			}
		}
	}

	return (stg);
}
