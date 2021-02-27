#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: counter of arguments.
 * @argv: vector of strings in arguments.
 *
 * Return: 1 if error, 0 instead.
 */
int main(int argc, char *argv[])
{
	int ans;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ans);
		return (0);
	}
}
