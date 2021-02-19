#include "holberton.h"

/**
 * rot13 - encodes a string into 1337.
 * @stg: string thats encoded.
 *
 * Return: Encoded string.
 */
char *rot13(char *stg)
{
	int i = 0;
	int j = 0;
	char letra[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char remp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; stg[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (stg[i] == letra[j])
			{
				stg[i] = remp[j];
				break;
			}
		}
	}

	return (stg);
}
