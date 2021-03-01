#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int check(char *);

/**
 * main - adds positive numbers.
 * @argc: counter of arguments.
 * @argv: vector of strings in arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * check - checks if a number can be converted.
 * @a: vector of strings in arguments.
 *
 * Return: 1 if its convertable, 0 if not.
 */
int check(char *a)
{
	int i = 0, resp = 0;

	while (a[i] != '\0')
	{
		if (a[i] > 47 && a[i] < 58)
		{
			resp = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (resp);
}
