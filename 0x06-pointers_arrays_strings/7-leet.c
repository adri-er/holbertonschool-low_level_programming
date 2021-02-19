#include "holberton.h"

/**
 * *leet - encodes a string into 1337.
 * @stg: string thats encoded.
 *
 * Return: Encode string.
 */
char *leet(char *stg)
{
	int i = 0;
	int j = 0;
	char letra[] = {'A', 'E', 'O', 'T', 'L'};
	char remp[] = {'4', '3', '0', '7', '1'};

	for (; stg[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (stg[i] == letra[j] || stg[i] == (letra[j] + 32))
			{
				stg[i] = remp[j];
			}
		}
	}

	return (stg);
}
