#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of entries.
 * @av: pointers to entries.
 *
 * Return: entries concatenated.
 */
char *argstostr(int ac, char **av)
{
	char *memory;
	int counter = 0, amount = 0, length = 0, index, index2, index3;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (index2 = 0; index2 < ac; index2++)
	{
		for (length = 0; av[index2][length]; length++)
		{
		}
		amount += (length + 1);
	}

	memory = malloc((amount + 1) * sizeof(char));
	if (memory == NULL)
	{
		return (NULL);
	}

	for (index3 = 0; index3 < ac; index3++)
	{
		for (length = 0; av[index3][length]; length++)
		{
		}

		for (index = 0; index < length; index++)
		{
			memory[counter] = av[index3][index];
			counter++;
			if (index + 1 == length)
			{
				memory[counter] = '\n';
				counter++;
			}
		}
	}
	return (memory);
}
