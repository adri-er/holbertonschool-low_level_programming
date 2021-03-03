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
	int counter = 0, amount = 0, length = 0, index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; counter < ac; counter++)
	{
		amount += sizeof(av[counter]);
	}
	memory = (char *)malloc(amount);
	ac--;
	for (; ac >= 0; ac--)
	{
		length = sizeof(av[ac]);
		for (index = 0; index < length; index++)
		{
			memory[counter] = *(av[ac] + index);
			counter++;
			if (index + 1 == length)
			{
				memory[counter] = '\n';
			}
		}
	}
	return (memory);
}
