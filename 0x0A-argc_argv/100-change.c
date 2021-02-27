#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change.
 * @argc: counter of arguments.
 * @argv: vector of strings in arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int amount, num_c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			num_c += amount / 25;
			amount = amount % 25;
			num_c += amount / 10;
			amount = amount % 10;
			num_c += amount / 5;
			amount = amount % 5;
			num_c += amount / 2;
			amount = amount % 2;
			num_c += amount;
			printf("%d\n", num_c);
		}
	}
	return (0);
}
